project('alexa', 'cpp',
        version: '0.1.0',
        meson_version: '>= 0.59.0',
        default_options: [ 'warning_level=2',
                           'cpp_std=gnu++2a',
                         ],
)

gnome = import('gnome')

if get_option('profile') == 'development'
  profile = '.Devel'
  if fs.is_dir('.git')
    vcs_tag = run_command('git', 'rev-parse', '--short', 'HEAD').stdout().strip()
    if vcs_tag == ''
      version_suffix = '-devel'
    else
      version_suffix = '-@0@'.format(vcs_tag)
    endif
  else
    version_suffix = '-devel'
  endif
else
  profile = ''
  version_suffix = ''
endif

application_id = 'amarula.alexa@0@'.format(profile)

subdir('data')
subdir('src')

incdir = include_directories('modules', 'gi', 'override', 'expected-lite')

gtkdep = dependency('gtk+-3.0')
glibdep = dependency('glib-2.0')
atkdep = dependency('atk')
soupdep = dependency('libsoup-2.4')
webkitdep = dependency('webkit2gtk-4.0')

executable('alexa', sources, 'modules/gtk/gtk.cpp',
           'modules/atk/atk.cpp',
           'modules/gio/gio.cpp',
           'modules/glib/glib.cpp',
           'modules/gobject/gobject.cpp',
           'modules/webkit2/webkit2.cpp',
           include_directories : incdir,
           dependencies: [gtkdep, glibdep, atkdep, soupdep, webkitdep])

summary({
    'prefix': get_option('prefix'),
    'libdir': get_option('libdir'),
    'datadir': get_option('datadir'),
    'bindir': get_option('bindir'),
  },
  section: 'Directories',
)

summary({
    'Profile': get_option('profile'),
  },
  section: 'Build options',
)
