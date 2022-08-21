# SPDX-FileCopyrightText: 2022  Emmanuele Bassi
# SPDX-License-Identifier: GPL-3.0-or-later

pkgdatadir = get_option('prefix') / get_option('datadir') / meson.project_name()

conf = configuration_data()
conf.set_quoted('VERSION', '@0@@1@'.format(meson.project_version(), version_suffix))
conf.set_quoted('GETTEXT_PACKAGE', 'alexa')
conf.set_quoted('LOCALEDIR', get_option('prefix') / get_option('localedir'))
conf.set_quoted('PKGDATADIR', pkgdatadir)
conf.set_quoted('APPLICATION_ID', application_id)
conf.set_quoted('PROFILE', get_option('profile'))

configure_file(
  input: 'config.h.in',
  output: 'config.h',
  configuration: conf
)

# Copy the config.cpp output to the source directory.
run_command(
  'cp',
  join_paths(meson.project_build_root(), 'src', 'config.h'),
  join_paths(meson.project_source_root(), 'src', 'config.h'),
  check: true,
)

cpp_sources = files(
  'main.cpp',
)

sources = [cpp_sources]
