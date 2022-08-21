// AUTO-GENERATED

#ifndef _GI_GLIB__ENUMS_HPP_
#define _GI_GLIB__ENUMS_HPP_

namespace gi {

namespace repository {

namespace GLib {

#if defined(BookmarkFileError)
#undef BookmarkFileError
#endif
enum class BookmarkFileError {
  INVALID_URI_ = G_BOOKMARK_FILE_ERROR_INVALID_URI,
  INVALID_VALUE_ = G_BOOKMARK_FILE_ERROR_INVALID_VALUE,
  APP_NOT_REGISTERED_ = G_BOOKMARK_FILE_ERROR_APP_NOT_REGISTERED,
  URI_NOT_FOUND_ = G_BOOKMARK_FILE_ERROR_URI_NOT_FOUND,
  READ_ = G_BOOKMARK_FILE_ERROR_READ,
  UNKNOWN_ENCODING_ = G_BOOKMARK_FILE_ERROR_UNKNOWN_ENCODING,
  WRITE_ = G_BOOKMARK_FILE_ERROR_WRITE,
  FILE_NOT_FOUND_ = G_BOOKMARK_FILE_ERROR_FILE_NOT_FOUND,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::BookmarkFileError>
{ typedef GBookmarkFileError type; }; 
template<> struct declare_cpptype_of<GBookmarkFileError>
{ typedef GLib::BookmarkFileError type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(ChecksumType)
#undef ChecksumType
#endif
enum class ChecksumType {
  MD5_ = G_CHECKSUM_MD5,
  SHA1_ = G_CHECKSUM_SHA1,
  SHA256_ = G_CHECKSUM_SHA256,
  SHA512_ = G_CHECKSUM_SHA512,
  SHA384_ = G_CHECKSUM_SHA384,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::ChecksumType>
{ typedef GChecksumType type; }; 
template<> struct declare_cpptype_of<GChecksumType>
{ typedef GLib::ChecksumType type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(ConvertError)
#undef ConvertError
#endif
enum class ConvertError {
  NO_CONVERSION_ = G_CONVERT_ERROR_NO_CONVERSION,
  ILLEGAL_SEQUENCE_ = G_CONVERT_ERROR_ILLEGAL_SEQUENCE,
  FAILED_ = G_CONVERT_ERROR_FAILED,
  PARTIAL_INPUT_ = G_CONVERT_ERROR_PARTIAL_INPUT,
  BAD_URI_ = G_CONVERT_ERROR_BAD_URI,
  NOT_ABSOLUTE_PATH_ = G_CONVERT_ERROR_NOT_ABSOLUTE_PATH,
  NO_MEMORY_ = G_CONVERT_ERROR_NO_MEMORY,
  EMBEDDED_NUL_ = G_CONVERT_ERROR_EMBEDDED_NUL,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::ConvertError>
{ typedef GConvertError type; }; 
template<> struct declare_cpptype_of<GConvertError>
{ typedef GLib::ConvertError type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(DateDMY)
#undef DateDMY
#endif
enum class DateDMY {
  DAY_ = G_DATE_DAY,
  MONTH_ = G_DATE_MONTH,
  YEAR_ = G_DATE_YEAR,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::DateDMY>
{ typedef GDateDMY type; }; 
template<> struct declare_cpptype_of<GDateDMY>
{ typedef GLib::DateDMY type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(DateMonth)
#undef DateMonth
#endif
enum class DateMonth {
  BAD_MONTH_ = G_DATE_BAD_MONTH,
  JANUARY_ = G_DATE_JANUARY,
  FEBRUARY_ = G_DATE_FEBRUARY,
  MARCH_ = G_DATE_MARCH,
  APRIL_ = G_DATE_APRIL,
  MAY_ = G_DATE_MAY,
  JUNE_ = G_DATE_JUNE,
  JULY_ = G_DATE_JULY,
  AUGUST_ = G_DATE_AUGUST,
  SEPTEMBER_ = G_DATE_SEPTEMBER,
  OCTOBER_ = G_DATE_OCTOBER,
  NOVEMBER_ = G_DATE_NOVEMBER,
  DECEMBER_ = G_DATE_DECEMBER,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::DateMonth>
{ typedef GDateMonth type; }; 
template<> struct declare_cpptype_of<GDateMonth>
{ typedef GLib::DateMonth type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(DateWeekday)
#undef DateWeekday
#endif
enum class DateWeekday {
  BAD_WEEKDAY_ = G_DATE_BAD_WEEKDAY,
  MONDAY_ = G_DATE_MONDAY,
  TUESDAY_ = G_DATE_TUESDAY,
  WEDNESDAY_ = G_DATE_WEDNESDAY,
  THURSDAY_ = G_DATE_THURSDAY,
  FRIDAY_ = G_DATE_FRIDAY,
  SATURDAY_ = G_DATE_SATURDAY,
  SUNDAY_ = G_DATE_SUNDAY,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::DateWeekday>
{ typedef GDateWeekday type; }; 
template<> struct declare_cpptype_of<GDateWeekday>
{ typedef GLib::DateWeekday type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(ErrorType)
#undef ErrorType
#endif
enum class ErrorType {
  UNKNOWN_ = G_ERR_UNKNOWN,
  UNEXP_EOF_ = G_ERR_UNEXP_EOF,
  UNEXP_EOF_IN_STRING_ = G_ERR_UNEXP_EOF_IN_STRING,
  UNEXP_EOF_IN_COMMENT_ = G_ERR_UNEXP_EOF_IN_COMMENT,
  NON_DIGIT_IN_CONST_ = G_ERR_NON_DIGIT_IN_CONST,
  DIGIT_RADIX_ = G_ERR_DIGIT_RADIX,
  FLOAT_RADIX_ = G_ERR_FLOAT_RADIX,
  FLOAT_MALFORMED_ = G_ERR_FLOAT_MALFORMED,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::ErrorType>
{ typedef GErrorType type; }; 
template<> struct declare_cpptype_of<GErrorType>
{ typedef GLib::ErrorType type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(FileError)
#undef FileError
#endif
enum class FileError {
  EXIST_ = G_FILE_ERROR_EXIST,
  ISDIR_ = G_FILE_ERROR_ISDIR,
  ACCES_ = G_FILE_ERROR_ACCES,
  NAMETOOLONG_ = G_FILE_ERROR_NAMETOOLONG,
  NOENT_ = G_FILE_ERROR_NOENT,
  NOTDIR_ = G_FILE_ERROR_NOTDIR,
  NXIO_ = G_FILE_ERROR_NXIO,
  NODEV_ = G_FILE_ERROR_NODEV,
  ROFS_ = G_FILE_ERROR_ROFS,
  TXTBSY_ = G_FILE_ERROR_TXTBSY,
  FAULT_ = G_FILE_ERROR_FAULT,
  LOOP_ = G_FILE_ERROR_LOOP,
  NOSPC_ = G_FILE_ERROR_NOSPC,
  NOMEM_ = G_FILE_ERROR_NOMEM,
  MFILE_ = G_FILE_ERROR_MFILE,
  NFILE_ = G_FILE_ERROR_NFILE,
  BADF_ = G_FILE_ERROR_BADF,
  INVAL_ = G_FILE_ERROR_INVAL,
  PIPE_ = G_FILE_ERROR_PIPE,
  AGAIN_ = G_FILE_ERROR_AGAIN,
  INTR_ = G_FILE_ERROR_INTR,
  IO_ = G_FILE_ERROR_IO,
  PERM_ = G_FILE_ERROR_PERM,
  NOSYS_ = G_FILE_ERROR_NOSYS,
  FAILED_ = G_FILE_ERROR_FAILED,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::FileError>
{ typedef GFileError type; }; 
template<> struct declare_cpptype_of<GFileError>
{ typedef GLib::FileError type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(IOChannelError)
#undef IOChannelError
#endif
enum class IOChannelError {
  FBIG_ = G_IO_CHANNEL_ERROR_FBIG,
  INVAL_ = G_IO_CHANNEL_ERROR_INVAL,
  IO_ = G_IO_CHANNEL_ERROR_IO,
  ISDIR_ = G_IO_CHANNEL_ERROR_ISDIR,
  NOSPC_ = G_IO_CHANNEL_ERROR_NOSPC,
  NXIO_ = G_IO_CHANNEL_ERROR_NXIO,
  OVERFLOW_ = G_IO_CHANNEL_ERROR_OVERFLOW,
  PIPE_ = G_IO_CHANNEL_ERROR_PIPE,
  FAILED_ = G_IO_CHANNEL_ERROR_FAILED,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::IOChannelError>
{ typedef GIOChannelError type; }; 
template<> struct declare_cpptype_of<GIOChannelError>
{ typedef GLib::IOChannelError type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(IOError)
#undef IOError
#endif
enum class IOError {
  NONE_ = G_IO_ERROR_NONE,
  AGAIN_ = G_IO_ERROR_AGAIN,
  INVAL_ = G_IO_ERROR_INVAL,
  UNKNOWN_ = G_IO_ERROR_UNKNOWN,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::IOError>
{ typedef GIOError type; }; 
template<> struct declare_cpptype_of<GIOError>
{ typedef GLib::IOError type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(IOStatus)
#undef IOStatus
#endif
enum class IOStatus {
  ERROR_ = G_IO_STATUS_ERROR,
  NORMAL_ = G_IO_STATUS_NORMAL,
  EOF_ = G_IO_STATUS_EOF,
  AGAIN_ = G_IO_STATUS_AGAIN,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::IOStatus>
{ typedef GIOStatus type; }; 
template<> struct declare_cpptype_of<GIOStatus>
{ typedef GLib::IOStatus type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(KeyFileError)
#undef KeyFileError
#endif
enum class KeyFileError {
  UNKNOWN_ENCODING_ = G_KEY_FILE_ERROR_UNKNOWN_ENCODING,
  PARSE_ = G_KEY_FILE_ERROR_PARSE,
  NOT_FOUND_ = G_KEY_FILE_ERROR_NOT_FOUND,
  KEY_NOT_FOUND_ = G_KEY_FILE_ERROR_KEY_NOT_FOUND,
  GROUP_NOT_FOUND_ = G_KEY_FILE_ERROR_GROUP_NOT_FOUND,
  INVALID_VALUE_ = G_KEY_FILE_ERROR_INVALID_VALUE,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::KeyFileError>
{ typedef GKeyFileError type; }; 
template<> struct declare_cpptype_of<GKeyFileError>
{ typedef GLib::KeyFileError type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(LogWriterOutput)
#undef LogWriterOutput
#endif
enum class LogWriterOutput {
  HANDLED_ = G_LOG_WRITER_HANDLED,
  UNHANDLED_ = G_LOG_WRITER_UNHANDLED,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::LogWriterOutput>
{ typedef GLogWriterOutput type; }; 
template<> struct declare_cpptype_of<GLogWriterOutput>
{ typedef GLib::LogWriterOutput type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(MarkupError)
#undef MarkupError
#endif
enum class MarkupError {
  BAD_UTF8_ = G_MARKUP_ERROR_BAD_UTF8,
  EMPTY_ = G_MARKUP_ERROR_EMPTY,
  PARSE_ = G_MARKUP_ERROR_PARSE,
  UNKNOWN_ELEMENT_ = G_MARKUP_ERROR_UNKNOWN_ELEMENT,
  UNKNOWN_ATTRIBUTE_ = G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE,
  INVALID_CONTENT_ = G_MARKUP_ERROR_INVALID_CONTENT,
  MISSING_ATTRIBUTE_ = G_MARKUP_ERROR_MISSING_ATTRIBUTE,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::MarkupError>
{ typedef GMarkupError type; }; 
template<> struct declare_cpptype_of<GMarkupError>
{ typedef GLib::MarkupError type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(NormalizeMode)
#undef NormalizeMode
#endif
enum class NormalizeMode {
  DEFAULT_ = G_NORMALIZE_DEFAULT,
  NFD_ = G_NORMALIZE_NFD,
  DEFAULT_COMPOSE_ = G_NORMALIZE_DEFAULT_COMPOSE,
  NFC_ = G_NORMALIZE_NFC,
  ALL_ = G_NORMALIZE_ALL,
  NFKD_ = G_NORMALIZE_NFKD,
  ALL_COMPOSE_ = G_NORMALIZE_ALL_COMPOSE,
  NFKC_ = G_NORMALIZE_NFKC,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::NormalizeMode>
{ typedef GNormalizeMode type; }; 
template<> struct declare_cpptype_of<GNormalizeMode>
{ typedef GLib::NormalizeMode type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(NumberParserError)
#undef NumberParserError
#endif
enum class NumberParserError {
  INVALID_ = G_NUMBER_PARSER_ERROR_INVALID,
  OUT_OF_BOUNDS_ = G_NUMBER_PARSER_ERROR_OUT_OF_BOUNDS,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::NumberParserError>
{ typedef GNumberParserError type; }; 
template<> struct declare_cpptype_of<GNumberParserError>
{ typedef GLib::NumberParserError type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(OnceStatus)
#undef OnceStatus
#endif
enum class OnceStatus {
  NOTCALLED_ = G_ONCE_STATUS_NOTCALLED,
  PROGRESS_ = G_ONCE_STATUS_PROGRESS,
  READY_ = G_ONCE_STATUS_READY,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::OnceStatus>
{ typedef GOnceStatus type; }; 
template<> struct declare_cpptype_of<GOnceStatus>
{ typedef GLib::OnceStatus type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(OptionArg)
#undef OptionArg
#endif
enum class OptionArg {
  NONE_ = G_OPTION_ARG_NONE,
  STRING_ = G_OPTION_ARG_STRING,
  INT_ = G_OPTION_ARG_INT,
  CALLBACK_ = G_OPTION_ARG_CALLBACK,
  FILENAME_ = G_OPTION_ARG_FILENAME,
  STRING_ARRAY_ = G_OPTION_ARG_STRING_ARRAY,
  FILENAME_ARRAY_ = G_OPTION_ARG_FILENAME_ARRAY,
  DOUBLE_ = G_OPTION_ARG_DOUBLE,
  INT64_ = G_OPTION_ARG_INT64,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::OptionArg>
{ typedef GOptionArg type; }; 
template<> struct declare_cpptype_of<GOptionArg>
{ typedef GLib::OptionArg type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(OptionError)
#undef OptionError
#endif
enum class OptionError {
  UNKNOWN_OPTION_ = G_OPTION_ERROR_UNKNOWN_OPTION,
  BAD_VALUE_ = G_OPTION_ERROR_BAD_VALUE,
  FAILED_ = G_OPTION_ERROR_FAILED,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::OptionError>
{ typedef GOptionError type; }; 
template<> struct declare_cpptype_of<GOptionError>
{ typedef GLib::OptionError type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(RegexError)
#undef RegexError
#endif
enum class RegexError {
  COMPILE_ = G_REGEX_ERROR_COMPILE,
  OPTIMIZE_ = G_REGEX_ERROR_OPTIMIZE,
  REPLACE_ = G_REGEX_ERROR_REPLACE,
  MATCH_ = G_REGEX_ERROR_MATCH,
  INTERNAL_ = G_REGEX_ERROR_INTERNAL,
  STRAY_BACKSLASH_ = G_REGEX_ERROR_STRAY_BACKSLASH,
  MISSING_CONTROL_CHAR_ = G_REGEX_ERROR_MISSING_CONTROL_CHAR,
  UNRECOGNIZED_ESCAPE_ = G_REGEX_ERROR_UNRECOGNIZED_ESCAPE,
  QUANTIFIERS_OUT_OF_ORDER_ = G_REGEX_ERROR_QUANTIFIERS_OUT_OF_ORDER,
  QUANTIFIER_TOO_BIG_ = G_REGEX_ERROR_QUANTIFIER_TOO_BIG,
  UNTERMINATED_CHARACTER_CLASS_ = G_REGEX_ERROR_UNTERMINATED_CHARACTER_CLASS,
  INVALID_ESCAPE_IN_CHARACTER_CLASS_ = G_REGEX_ERROR_INVALID_ESCAPE_IN_CHARACTER_CLASS,
  RANGE_OUT_OF_ORDER_ = G_REGEX_ERROR_RANGE_OUT_OF_ORDER,
  NOTHING_TO_REPEAT_ = G_REGEX_ERROR_NOTHING_TO_REPEAT,
  UNRECOGNIZED_CHARACTER_ = G_REGEX_ERROR_UNRECOGNIZED_CHARACTER,
  POSIX_NAMED_CLASS_OUTSIDE_CLASS_ = G_REGEX_ERROR_POSIX_NAMED_CLASS_OUTSIDE_CLASS,
  UNMATCHED_PARENTHESIS_ = G_REGEX_ERROR_UNMATCHED_PARENTHESIS,
  INEXISTENT_SUBPATTERN_REFERENCE_ = G_REGEX_ERROR_INEXISTENT_SUBPATTERN_REFERENCE,
  UNTERMINATED_COMMENT_ = G_REGEX_ERROR_UNTERMINATED_COMMENT,
  EXPRESSION_TOO_LARGE_ = G_REGEX_ERROR_EXPRESSION_TOO_LARGE,
  MEMORY_ERROR_ = G_REGEX_ERROR_MEMORY_ERROR,
  VARIABLE_LENGTH_LOOKBEHIND_ = G_REGEX_ERROR_VARIABLE_LENGTH_LOOKBEHIND,
  MALFORMED_CONDITION_ = G_REGEX_ERROR_MALFORMED_CONDITION,
  TOO_MANY_CONDITIONAL_BRANCHES_ = G_REGEX_ERROR_TOO_MANY_CONDITIONAL_BRANCHES,
  ASSERTION_EXPECTED_ = G_REGEX_ERROR_ASSERTION_EXPECTED,
  UNKNOWN_POSIX_CLASS_NAME_ = G_REGEX_ERROR_UNKNOWN_POSIX_CLASS_NAME,
  POSIX_COLLATING_ELEMENTS_NOT_SUPPORTED_ = G_REGEX_ERROR_POSIX_COLLATING_ELEMENTS_NOT_SUPPORTED,
  HEX_CODE_TOO_LARGE_ = G_REGEX_ERROR_HEX_CODE_TOO_LARGE,
  INVALID_CONDITION_ = G_REGEX_ERROR_INVALID_CONDITION,
  SINGLE_BYTE_MATCH_IN_LOOKBEHIND_ = G_REGEX_ERROR_SINGLE_BYTE_MATCH_IN_LOOKBEHIND,
  INFINITE_LOOP_ = G_REGEX_ERROR_INFINITE_LOOP,
  MISSING_SUBPATTERN_NAME_TERMINATOR_ = G_REGEX_ERROR_MISSING_SUBPATTERN_NAME_TERMINATOR,
  DUPLICATE_SUBPATTERN_NAME_ = G_REGEX_ERROR_DUPLICATE_SUBPATTERN_NAME,
  MALFORMED_PROPERTY_ = G_REGEX_ERROR_MALFORMED_PROPERTY,
  UNKNOWN_PROPERTY_ = G_REGEX_ERROR_UNKNOWN_PROPERTY,
  SUBPATTERN_NAME_TOO_LONG_ = G_REGEX_ERROR_SUBPATTERN_NAME_TOO_LONG,
  TOO_MANY_SUBPATTERNS_ = G_REGEX_ERROR_TOO_MANY_SUBPATTERNS,
  INVALID_OCTAL_VALUE_ = G_REGEX_ERROR_INVALID_OCTAL_VALUE,
  TOO_MANY_BRANCHES_IN_DEFINE_ = G_REGEX_ERROR_TOO_MANY_BRANCHES_IN_DEFINE,
  DEFINE_REPETION_ = G_REGEX_ERROR_DEFINE_REPETION,
  INCONSISTENT_NEWLINE_OPTIONS_ = G_REGEX_ERROR_INCONSISTENT_NEWLINE_OPTIONS,
  MISSING_BACK_REFERENCE_ = G_REGEX_ERROR_MISSING_BACK_REFERENCE,
  INVALID_RELATIVE_REFERENCE_ = G_REGEX_ERROR_INVALID_RELATIVE_REFERENCE,
  BACKTRACKING_CONTROL_VERB_ARGUMENT_FORBIDDEN_ = G_REGEX_ERROR_BACKTRACKING_CONTROL_VERB_ARGUMENT_FORBIDDEN,
  UNKNOWN_BACKTRACKING_CONTROL_VERB_ = G_REGEX_ERROR_UNKNOWN_BACKTRACKING_CONTROL_VERB,
  NUMBER_TOO_BIG_ = G_REGEX_ERROR_NUMBER_TOO_BIG,
  MISSING_SUBPATTERN_NAME_ = G_REGEX_ERROR_MISSING_SUBPATTERN_NAME,
  MISSING_DIGIT_ = G_REGEX_ERROR_MISSING_DIGIT,
  INVALID_DATA_CHARACTER_ = G_REGEX_ERROR_INVALID_DATA_CHARACTER,
  EXTRA_SUBPATTERN_NAME_ = G_REGEX_ERROR_EXTRA_SUBPATTERN_NAME,
  BACKTRACKING_CONTROL_VERB_ARGUMENT_REQUIRED_ = G_REGEX_ERROR_BACKTRACKING_CONTROL_VERB_ARGUMENT_REQUIRED,
  INVALID_CONTROL_CHAR_ = G_REGEX_ERROR_INVALID_CONTROL_CHAR,
  MISSING_NAME_ = G_REGEX_ERROR_MISSING_NAME,
  NOT_SUPPORTED_IN_CLASS_ = G_REGEX_ERROR_NOT_SUPPORTED_IN_CLASS,
  TOO_MANY_FORWARD_REFERENCES_ = G_REGEX_ERROR_TOO_MANY_FORWARD_REFERENCES,
  NAME_TOO_LONG_ = G_REGEX_ERROR_NAME_TOO_LONG,
  CHARACTER_VALUE_TOO_LARGE_ = G_REGEX_ERROR_CHARACTER_VALUE_TOO_LARGE,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::RegexError>
{ typedef GRegexError type; }; 
template<> struct declare_cpptype_of<GRegexError>
{ typedef GLib::RegexError type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(SeekType)
#undef SeekType
#endif
enum class SeekType {
  CUR_ = G_SEEK_CUR,
  SET_ = G_SEEK_SET,
  END_ = G_SEEK_END,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::SeekType>
{ typedef GSeekType type; }; 
template<> struct declare_cpptype_of<GSeekType>
{ typedef GLib::SeekType type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(ShellError)
#undef ShellError
#endif
enum class ShellError {
  BAD_QUOTING_ = G_SHELL_ERROR_BAD_QUOTING,
  EMPTY_STRING_ = G_SHELL_ERROR_EMPTY_STRING,
  FAILED_ = G_SHELL_ERROR_FAILED,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::ShellError>
{ typedef GShellError type; }; 
template<> struct declare_cpptype_of<GShellError>
{ typedef GLib::ShellError type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(SliceConfig)
#undef SliceConfig
#endif
enum class SliceConfig {
  ALWAYS_MALLOC_ = G_SLICE_CONFIG_ALWAYS_MALLOC,
  BYPASS_MAGAZINES_ = G_SLICE_CONFIG_BYPASS_MAGAZINES,
  WORKING_SET_MSECS_ = G_SLICE_CONFIG_WORKING_SET_MSECS,
  COLOR_INCREMENT_ = G_SLICE_CONFIG_COLOR_INCREMENT,
  CHUNK_SIZES_ = G_SLICE_CONFIG_CHUNK_SIZES,
  CONTENTION_COUNTER_ = G_SLICE_CONFIG_CONTENTION_COUNTER,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::SliceConfig>
{ typedef GSliceConfig type; }; 
template<> struct declare_cpptype_of<GSliceConfig>
{ typedef GLib::SliceConfig type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(SpawnError)
#undef SpawnError
#endif
enum class SpawnError {
  FORK_ = G_SPAWN_ERROR_FORK,
  READ_ = G_SPAWN_ERROR_READ,
  CHDIR_ = G_SPAWN_ERROR_CHDIR,
  ACCES_ = G_SPAWN_ERROR_ACCES,
  PERM_ = G_SPAWN_ERROR_PERM,
  TOO_BIG_ = G_SPAWN_ERROR_TOO_BIG,
  _2BIG = G_SPAWN_ERROR_2BIG,
  NOEXEC_ = G_SPAWN_ERROR_NOEXEC,
  NAMETOOLONG_ = G_SPAWN_ERROR_NAMETOOLONG,
  NOENT_ = G_SPAWN_ERROR_NOENT,
  NOMEM_ = G_SPAWN_ERROR_NOMEM,
  NOTDIR_ = G_SPAWN_ERROR_NOTDIR,
  LOOP_ = G_SPAWN_ERROR_LOOP,
  TXTBUSY_ = G_SPAWN_ERROR_TXTBUSY,
  IO_ = G_SPAWN_ERROR_IO,
  NFILE_ = G_SPAWN_ERROR_NFILE,
  MFILE_ = G_SPAWN_ERROR_MFILE,
  INVAL_ = G_SPAWN_ERROR_INVAL,
  ISDIR_ = G_SPAWN_ERROR_ISDIR,
  LIBBAD_ = G_SPAWN_ERROR_LIBBAD,
  FAILED_ = G_SPAWN_ERROR_FAILED,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::SpawnError>
{ typedef GSpawnError type; }; 
template<> struct declare_cpptype_of<GSpawnError>
{ typedef GLib::SpawnError type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(TestFileType)
#undef TestFileType
#endif
enum class TestFileType {
  DIST_ = G_TEST_DIST,
  BUILT_ = G_TEST_BUILT,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::TestFileType>
{ typedef GTestFileType type; }; 
template<> struct declare_cpptype_of<GTestFileType>
{ typedef GLib::TestFileType type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(TestLogType)
#undef TestLogType
#endif
enum class TestLogType {
  NONE_ = G_TEST_LOG_NONE,
  ERROR_ = G_TEST_LOG_ERROR,
  START_BINARY_ = G_TEST_LOG_START_BINARY,
  LIST_CASE_ = G_TEST_LOG_LIST_CASE,
  SKIP_CASE_ = G_TEST_LOG_SKIP_CASE,
  START_CASE_ = G_TEST_LOG_START_CASE,
  STOP_CASE_ = G_TEST_LOG_STOP_CASE,
  MIN_RESULT_ = G_TEST_LOG_MIN_RESULT,
  MAX_RESULT_ = G_TEST_LOG_MAX_RESULT,
  MESSAGE_ = G_TEST_LOG_MESSAGE,
  START_SUITE_ = G_TEST_LOG_START_SUITE,
  STOP_SUITE_ = G_TEST_LOG_STOP_SUITE,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::TestLogType>
{ typedef GTestLogType type; }; 
template<> struct declare_cpptype_of<GTestLogType>
{ typedef GLib::TestLogType type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(TestResult)
#undef TestResult
#endif
enum class TestResult {
  SUCCESS_ = G_TEST_RUN_SUCCESS,
  SKIPPED_ = G_TEST_RUN_SKIPPED,
  FAILURE_ = G_TEST_RUN_FAILURE,
  INCOMPLETE_ = G_TEST_RUN_INCOMPLETE,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::TestResult>
{ typedef GTestResult type; }; 
template<> struct declare_cpptype_of<GTestResult>
{ typedef GLib::TestResult type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(ThreadError)
#undef ThreadError
#endif
enum class ThreadError {
  THREAD_ERROR_AGAIN_ = G_THREAD_ERROR_AGAIN,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::ThreadError>
{ typedef GThreadError type; }; 
template<> struct declare_cpptype_of<GThreadError>
{ typedef GLib::ThreadError type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(TimeType)
#undef TimeType
#endif
enum class TimeType {
  STANDARD_ = G_TIME_TYPE_STANDARD,
  DAYLIGHT_ = G_TIME_TYPE_DAYLIGHT,
  UNIVERSAL_ = G_TIME_TYPE_UNIVERSAL,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::TimeType>
{ typedef GTimeType type; }; 
template<> struct declare_cpptype_of<GTimeType>
{ typedef GLib::TimeType type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(TokenType)
#undef TokenType
#endif
enum class TokenType {
  EOF_ = G_TOKEN_EOF,
  LEFT_PAREN_ = G_TOKEN_LEFT_PAREN,
  RIGHT_PAREN_ = G_TOKEN_RIGHT_PAREN,
  LEFT_CURLY_ = G_TOKEN_LEFT_CURLY,
  RIGHT_CURLY_ = G_TOKEN_RIGHT_CURLY,
  LEFT_BRACE_ = G_TOKEN_LEFT_BRACE,
  RIGHT_BRACE_ = G_TOKEN_RIGHT_BRACE,
  EQUAL_SIGN_ = G_TOKEN_EQUAL_SIGN,
  COMMA_ = G_TOKEN_COMMA,
  NONE_ = G_TOKEN_NONE,
  ERROR_ = G_TOKEN_ERROR,
  CHAR_ = G_TOKEN_CHAR,
  BINARY_ = G_TOKEN_BINARY,
  OCTAL_ = G_TOKEN_OCTAL,
  INT_ = G_TOKEN_INT,
  HEX_ = G_TOKEN_HEX,
  FLOAT_ = G_TOKEN_FLOAT,
  STRING_ = G_TOKEN_STRING,
  SYMBOL_ = G_TOKEN_SYMBOL,
  IDENTIFIER_ = G_TOKEN_IDENTIFIER,
  IDENTIFIER_NULL_ = G_TOKEN_IDENTIFIER_NULL,
  COMMENT_SINGLE_ = G_TOKEN_COMMENT_SINGLE,
  COMMENT_MULTI_ = G_TOKEN_COMMENT_MULTI,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::TokenType>
{ typedef GTokenType type; }; 
template<> struct declare_cpptype_of<GTokenType>
{ typedef GLib::TokenType type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(TraverseType)
#undef TraverseType
#endif
enum class TraverseType {
  IN_ORDER_ = G_IN_ORDER,
  PRE_ORDER_ = G_PRE_ORDER,
  POST_ORDER_ = G_POST_ORDER,
  LEVEL_ORDER_ = G_LEVEL_ORDER,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::TraverseType>
{ typedef GTraverseType type; }; 
template<> struct declare_cpptype_of<GTraverseType>
{ typedef GLib::TraverseType type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(UnicodeBreakType)
#undef UnicodeBreakType
#endif
enum class UnicodeBreakType {
  MANDATORY_ = G_UNICODE_BREAK_MANDATORY,
  CARRIAGE_RETURN_ = G_UNICODE_BREAK_CARRIAGE_RETURN,
  LINE_FEED_ = G_UNICODE_BREAK_LINE_FEED,
  COMBINING_MARK_ = G_UNICODE_BREAK_COMBINING_MARK,
  SURROGATE_ = G_UNICODE_BREAK_SURROGATE,
  ZERO_WIDTH_SPACE_ = G_UNICODE_BREAK_ZERO_WIDTH_SPACE,
  INSEPARABLE_ = G_UNICODE_BREAK_INSEPARABLE,
  NON_BREAKING_GLUE_ = G_UNICODE_BREAK_NON_BREAKING_GLUE,
  CONTINGENT_ = G_UNICODE_BREAK_CONTINGENT,
  SPACE_ = G_UNICODE_BREAK_SPACE,
  AFTER_ = G_UNICODE_BREAK_AFTER,
  BEFORE_ = G_UNICODE_BREAK_BEFORE,
  BEFORE_AND_AFTER_ = G_UNICODE_BREAK_BEFORE_AND_AFTER,
  HYPHEN_ = G_UNICODE_BREAK_HYPHEN,
  NON_STARTER_ = G_UNICODE_BREAK_NON_STARTER,
  OPEN_PUNCTUATION_ = G_UNICODE_BREAK_OPEN_PUNCTUATION,
  CLOSE_PUNCTUATION_ = G_UNICODE_BREAK_CLOSE_PUNCTUATION,
  QUOTATION_ = G_UNICODE_BREAK_QUOTATION,
  EXCLAMATION_ = G_UNICODE_BREAK_EXCLAMATION,
  IDEOGRAPHIC_ = G_UNICODE_BREAK_IDEOGRAPHIC,
  NUMERIC_ = G_UNICODE_BREAK_NUMERIC,
  INFIX_SEPARATOR_ = G_UNICODE_BREAK_INFIX_SEPARATOR,
  SYMBOL_ = G_UNICODE_BREAK_SYMBOL,
  ALPHABETIC_ = G_UNICODE_BREAK_ALPHABETIC,
  PREFIX_ = G_UNICODE_BREAK_PREFIX,
  POSTFIX_ = G_UNICODE_BREAK_POSTFIX,
  COMPLEX_CONTEXT_ = G_UNICODE_BREAK_COMPLEX_CONTEXT,
  AMBIGUOUS_ = G_UNICODE_BREAK_AMBIGUOUS,
  UNKNOWN_ = G_UNICODE_BREAK_UNKNOWN,
  NEXT_LINE_ = G_UNICODE_BREAK_NEXT_LINE,
  WORD_JOINER_ = G_UNICODE_BREAK_WORD_JOINER,
  HANGUL_L_JAMO_ = G_UNICODE_BREAK_HANGUL_L_JAMO,
  HANGUL_V_JAMO_ = G_UNICODE_BREAK_HANGUL_V_JAMO,
  HANGUL_T_JAMO_ = G_UNICODE_BREAK_HANGUL_T_JAMO,
  HANGUL_LV_SYLLABLE_ = G_UNICODE_BREAK_HANGUL_LV_SYLLABLE,
  HANGUL_LVT_SYLLABLE_ = G_UNICODE_BREAK_HANGUL_LVT_SYLLABLE,
  CLOSE_PARANTHESIS_ = G_UNICODE_BREAK_CLOSE_PARANTHESIS,
  CLOSE_PARENTHESIS_ = G_UNICODE_BREAK_CLOSE_PARENTHESIS,
  CONDITIONAL_JAPANESE_STARTER_ = G_UNICODE_BREAK_CONDITIONAL_JAPANESE_STARTER,
  HEBREW_LETTER_ = G_UNICODE_BREAK_HEBREW_LETTER,
  REGIONAL_INDICATOR_ = G_UNICODE_BREAK_REGIONAL_INDICATOR,
  EMOJI_BASE_ = G_UNICODE_BREAK_EMOJI_BASE,
  EMOJI_MODIFIER_ = G_UNICODE_BREAK_EMOJI_MODIFIER,
  ZERO_WIDTH_JOINER_ = G_UNICODE_BREAK_ZERO_WIDTH_JOINER,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::UnicodeBreakType>
{ typedef GUnicodeBreakType type; }; 
template<> struct declare_cpptype_of<GUnicodeBreakType>
{ typedef GLib::UnicodeBreakType type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(UnicodeScript)
#undef UnicodeScript
#endif
enum class UnicodeScript {
  INVALID_CODE_ = G_UNICODE_SCRIPT_INVALID_CODE,
  COMMON_ = G_UNICODE_SCRIPT_COMMON,
  INHERITED_ = G_UNICODE_SCRIPT_INHERITED,
  ARABIC_ = G_UNICODE_SCRIPT_ARABIC,
  ARMENIAN_ = G_UNICODE_SCRIPT_ARMENIAN,
  BENGALI_ = G_UNICODE_SCRIPT_BENGALI,
  BOPOMOFO_ = G_UNICODE_SCRIPT_BOPOMOFO,
  CHEROKEE_ = G_UNICODE_SCRIPT_CHEROKEE,
  COPTIC_ = G_UNICODE_SCRIPT_COPTIC,
  CYRILLIC_ = G_UNICODE_SCRIPT_CYRILLIC,
  DESERET_ = G_UNICODE_SCRIPT_DESERET,
  DEVANAGARI_ = G_UNICODE_SCRIPT_DEVANAGARI,
  ETHIOPIC_ = G_UNICODE_SCRIPT_ETHIOPIC,
  GEORGIAN_ = G_UNICODE_SCRIPT_GEORGIAN,
  GOTHIC_ = G_UNICODE_SCRIPT_GOTHIC,
  GREEK_ = G_UNICODE_SCRIPT_GREEK,
  GUJARATI_ = G_UNICODE_SCRIPT_GUJARATI,
  GURMUKHI_ = G_UNICODE_SCRIPT_GURMUKHI,
  HAN_ = G_UNICODE_SCRIPT_HAN,
  HANGUL_ = G_UNICODE_SCRIPT_HANGUL,
  HEBREW_ = G_UNICODE_SCRIPT_HEBREW,
  HIRAGANA_ = G_UNICODE_SCRIPT_HIRAGANA,
  KANNADA_ = G_UNICODE_SCRIPT_KANNADA,
  KATAKANA_ = G_UNICODE_SCRIPT_KATAKANA,
  KHMER_ = G_UNICODE_SCRIPT_KHMER,
  LAO_ = G_UNICODE_SCRIPT_LAO,
  LATIN_ = G_UNICODE_SCRIPT_LATIN,
  MALAYALAM_ = G_UNICODE_SCRIPT_MALAYALAM,
  MONGOLIAN_ = G_UNICODE_SCRIPT_MONGOLIAN,
  MYANMAR_ = G_UNICODE_SCRIPT_MYANMAR,
  OGHAM_ = G_UNICODE_SCRIPT_OGHAM,
  OLD_ITALIC_ = G_UNICODE_SCRIPT_OLD_ITALIC,
  ORIYA_ = G_UNICODE_SCRIPT_ORIYA,
  RUNIC_ = G_UNICODE_SCRIPT_RUNIC,
  SINHALA_ = G_UNICODE_SCRIPT_SINHALA,
  SYRIAC_ = G_UNICODE_SCRIPT_SYRIAC,
  TAMIL_ = G_UNICODE_SCRIPT_TAMIL,
  TELUGU_ = G_UNICODE_SCRIPT_TELUGU,
  THAANA_ = G_UNICODE_SCRIPT_THAANA,
  THAI_ = G_UNICODE_SCRIPT_THAI,
  TIBETAN_ = G_UNICODE_SCRIPT_TIBETAN,
  CANADIAN_ABORIGINAL_ = G_UNICODE_SCRIPT_CANADIAN_ABORIGINAL,
  YI_ = G_UNICODE_SCRIPT_YI,
  TAGALOG_ = G_UNICODE_SCRIPT_TAGALOG,
  HANUNOO_ = G_UNICODE_SCRIPT_HANUNOO,
  BUHID_ = G_UNICODE_SCRIPT_BUHID,
  TAGBANWA_ = G_UNICODE_SCRIPT_TAGBANWA,
  BRAILLE_ = G_UNICODE_SCRIPT_BRAILLE,
  CYPRIOT_ = G_UNICODE_SCRIPT_CYPRIOT,
  LIMBU_ = G_UNICODE_SCRIPT_LIMBU,
  OSMANYA_ = G_UNICODE_SCRIPT_OSMANYA,
  SHAVIAN_ = G_UNICODE_SCRIPT_SHAVIAN,
  LINEAR_B_ = G_UNICODE_SCRIPT_LINEAR_B,
  TAI_LE_ = G_UNICODE_SCRIPT_TAI_LE,
  UGARITIC_ = G_UNICODE_SCRIPT_UGARITIC,
  NEW_TAI_LUE_ = G_UNICODE_SCRIPT_NEW_TAI_LUE,
  BUGINESE_ = G_UNICODE_SCRIPT_BUGINESE,
  GLAGOLITIC_ = G_UNICODE_SCRIPT_GLAGOLITIC,
  TIFINAGH_ = G_UNICODE_SCRIPT_TIFINAGH,
  SYLOTI_NAGRI_ = G_UNICODE_SCRIPT_SYLOTI_NAGRI,
  OLD_PERSIAN_ = G_UNICODE_SCRIPT_OLD_PERSIAN,
  KHAROSHTHI_ = G_UNICODE_SCRIPT_KHAROSHTHI,
  UNKNOWN_ = G_UNICODE_SCRIPT_UNKNOWN,
  BALINESE_ = G_UNICODE_SCRIPT_BALINESE,
  CUNEIFORM_ = G_UNICODE_SCRIPT_CUNEIFORM,
  PHOENICIAN_ = G_UNICODE_SCRIPT_PHOENICIAN,
  PHAGS_PA_ = G_UNICODE_SCRIPT_PHAGS_PA,
  NKO_ = G_UNICODE_SCRIPT_NKO,
  KAYAH_LI_ = G_UNICODE_SCRIPT_KAYAH_LI,
  LEPCHA_ = G_UNICODE_SCRIPT_LEPCHA,
  REJANG_ = G_UNICODE_SCRIPT_REJANG,
  SUNDANESE_ = G_UNICODE_SCRIPT_SUNDANESE,
  SAURASHTRA_ = G_UNICODE_SCRIPT_SAURASHTRA,
  CHAM_ = G_UNICODE_SCRIPT_CHAM,
  OL_CHIKI_ = G_UNICODE_SCRIPT_OL_CHIKI,
  VAI_ = G_UNICODE_SCRIPT_VAI,
  CARIAN_ = G_UNICODE_SCRIPT_CARIAN,
  LYCIAN_ = G_UNICODE_SCRIPT_LYCIAN,
  LYDIAN_ = G_UNICODE_SCRIPT_LYDIAN,
  AVESTAN_ = G_UNICODE_SCRIPT_AVESTAN,
  BAMUM_ = G_UNICODE_SCRIPT_BAMUM,
  EGYPTIAN_HIEROGLYPHS_ = G_UNICODE_SCRIPT_EGYPTIAN_HIEROGLYPHS,
  IMPERIAL_ARAMAIC_ = G_UNICODE_SCRIPT_IMPERIAL_ARAMAIC,
  INSCRIPTIONAL_PAHLAVI_ = G_UNICODE_SCRIPT_INSCRIPTIONAL_PAHLAVI,
  INSCRIPTIONAL_PARTHIAN_ = G_UNICODE_SCRIPT_INSCRIPTIONAL_PARTHIAN,
  JAVANESE_ = G_UNICODE_SCRIPT_JAVANESE,
  KAITHI_ = G_UNICODE_SCRIPT_KAITHI,
  LISU_ = G_UNICODE_SCRIPT_LISU,
  MEETEI_MAYEK_ = G_UNICODE_SCRIPT_MEETEI_MAYEK,
  OLD_SOUTH_ARABIAN_ = G_UNICODE_SCRIPT_OLD_SOUTH_ARABIAN,
  OLD_TURKIC_ = G_UNICODE_SCRIPT_OLD_TURKIC,
  SAMARITAN_ = G_UNICODE_SCRIPT_SAMARITAN,
  TAI_THAM_ = G_UNICODE_SCRIPT_TAI_THAM,
  TAI_VIET_ = G_UNICODE_SCRIPT_TAI_VIET,
  BATAK_ = G_UNICODE_SCRIPT_BATAK,
  BRAHMI_ = G_UNICODE_SCRIPT_BRAHMI,
  MANDAIC_ = G_UNICODE_SCRIPT_MANDAIC,
  CHAKMA_ = G_UNICODE_SCRIPT_CHAKMA,
  MEROITIC_CURSIVE_ = G_UNICODE_SCRIPT_MEROITIC_CURSIVE,
  MEROITIC_HIEROGLYPHS_ = G_UNICODE_SCRIPT_MEROITIC_HIEROGLYPHS,
  MIAO_ = G_UNICODE_SCRIPT_MIAO,
  SHARADA_ = G_UNICODE_SCRIPT_SHARADA,
  SORA_SOMPENG_ = G_UNICODE_SCRIPT_SORA_SOMPENG,
  TAKRI_ = G_UNICODE_SCRIPT_TAKRI,
  BASSA_VAH_ = G_UNICODE_SCRIPT_BASSA_VAH,
  CAUCASIAN_ALBANIAN_ = G_UNICODE_SCRIPT_CAUCASIAN_ALBANIAN,
  DUPLOYAN_ = G_UNICODE_SCRIPT_DUPLOYAN,
  ELBASAN_ = G_UNICODE_SCRIPT_ELBASAN,
  GRANTHA_ = G_UNICODE_SCRIPT_GRANTHA,
  KHOJKI_ = G_UNICODE_SCRIPT_KHOJKI,
  KHUDAWADI_ = G_UNICODE_SCRIPT_KHUDAWADI,
  LINEAR_A_ = G_UNICODE_SCRIPT_LINEAR_A,
  MAHAJANI_ = G_UNICODE_SCRIPT_MAHAJANI,
  MANICHAEAN_ = G_UNICODE_SCRIPT_MANICHAEAN,
  MENDE_KIKAKUI_ = G_UNICODE_SCRIPT_MENDE_KIKAKUI,
  MODI_ = G_UNICODE_SCRIPT_MODI,
  MRO_ = G_UNICODE_SCRIPT_MRO,
  NABATAEAN_ = G_UNICODE_SCRIPT_NABATAEAN,
  OLD_NORTH_ARABIAN_ = G_UNICODE_SCRIPT_OLD_NORTH_ARABIAN,
  OLD_PERMIC_ = G_UNICODE_SCRIPT_OLD_PERMIC,
  PAHAWH_HMONG_ = G_UNICODE_SCRIPT_PAHAWH_HMONG,
  PALMYRENE_ = G_UNICODE_SCRIPT_PALMYRENE,
  PAU_CIN_HAU_ = G_UNICODE_SCRIPT_PAU_CIN_HAU,
  PSALTER_PAHLAVI_ = G_UNICODE_SCRIPT_PSALTER_PAHLAVI,
  SIDDHAM_ = G_UNICODE_SCRIPT_SIDDHAM,
  TIRHUTA_ = G_UNICODE_SCRIPT_TIRHUTA,
  WARANG_CITI_ = G_UNICODE_SCRIPT_WARANG_CITI,
  AHOM_ = G_UNICODE_SCRIPT_AHOM,
  ANATOLIAN_HIEROGLYPHS_ = G_UNICODE_SCRIPT_ANATOLIAN_HIEROGLYPHS,
  HATRAN_ = G_UNICODE_SCRIPT_HATRAN,
  MULTANI_ = G_UNICODE_SCRIPT_MULTANI,
  OLD_HUNGARIAN_ = G_UNICODE_SCRIPT_OLD_HUNGARIAN,
  SIGNWRITING_ = G_UNICODE_SCRIPT_SIGNWRITING,
  ADLAM_ = G_UNICODE_SCRIPT_ADLAM,
  BHAIKSUKI_ = G_UNICODE_SCRIPT_BHAIKSUKI,
  MARCHEN_ = G_UNICODE_SCRIPT_MARCHEN,
  NEWA_ = G_UNICODE_SCRIPT_NEWA,
  OSAGE_ = G_UNICODE_SCRIPT_OSAGE,
  TANGUT_ = G_UNICODE_SCRIPT_TANGUT,
  MASARAM_GONDI_ = G_UNICODE_SCRIPT_MASARAM_GONDI,
  NUSHU_ = G_UNICODE_SCRIPT_NUSHU,
  SOYOMBO_ = G_UNICODE_SCRIPT_SOYOMBO,
  ZANABAZAR_SQUARE_ = G_UNICODE_SCRIPT_ZANABAZAR_SQUARE,
  DOGRA_ = G_UNICODE_SCRIPT_DOGRA,
  GUNJALA_GONDI_ = G_UNICODE_SCRIPT_GUNJALA_GONDI,
  HANIFI_ROHINGYA_ = G_UNICODE_SCRIPT_HANIFI_ROHINGYA,
  MAKASAR_ = G_UNICODE_SCRIPT_MAKASAR,
  MEDEFAIDRIN_ = G_UNICODE_SCRIPT_MEDEFAIDRIN,
  OLD_SOGDIAN_ = G_UNICODE_SCRIPT_OLD_SOGDIAN,
  SOGDIAN_ = G_UNICODE_SCRIPT_SOGDIAN,
  ELYMAIC_ = G_UNICODE_SCRIPT_ELYMAIC,
  NANDINAGARI_ = G_UNICODE_SCRIPT_NANDINAGARI,
  NYIAKENG_PUACHUE_HMONG_ = G_UNICODE_SCRIPT_NYIAKENG_PUACHUE_HMONG,
  WANCHO_ = G_UNICODE_SCRIPT_WANCHO,
  CHORASMIAN_ = G_UNICODE_SCRIPT_CHORASMIAN,
  DIVES_AKURU_ = G_UNICODE_SCRIPT_DIVES_AKURU,
  KHITAN_SMALL_SCRIPT_ = G_UNICODE_SCRIPT_KHITAN_SMALL_SCRIPT,
  YEZIDI_ = G_UNICODE_SCRIPT_YEZIDI,
  CYPRO_MINOAN_ = G_UNICODE_SCRIPT_CYPRO_MINOAN,
  OLD_UYGHUR_ = G_UNICODE_SCRIPT_OLD_UYGHUR,
  TANGSA_ = G_UNICODE_SCRIPT_TANGSA,
  TOTO_ = G_UNICODE_SCRIPT_TOTO,
  VITHKUQI_ = G_UNICODE_SCRIPT_VITHKUQI,
  MATH_ = G_UNICODE_SCRIPT_MATH,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::UnicodeScript>
{ typedef GUnicodeScript type; }; 
template<> struct declare_cpptype_of<GUnicodeScript>
{ typedef GLib::UnicodeScript type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(UnicodeType)
#undef UnicodeType
#endif
enum class UnicodeType {
  CONTROL_ = G_UNICODE_CONTROL,
  FORMAT_ = G_UNICODE_FORMAT,
  UNASSIGNED_ = G_UNICODE_UNASSIGNED,
  PRIVATE_USE_ = G_UNICODE_PRIVATE_USE,
  SURROGATE_ = G_UNICODE_SURROGATE,
  LOWERCASE_LETTER_ = G_UNICODE_LOWERCASE_LETTER,
  MODIFIER_LETTER_ = G_UNICODE_MODIFIER_LETTER,
  OTHER_LETTER_ = G_UNICODE_OTHER_LETTER,
  TITLECASE_LETTER_ = G_UNICODE_TITLECASE_LETTER,
  UPPERCASE_LETTER_ = G_UNICODE_UPPERCASE_LETTER,
  SPACING_MARK_ = G_UNICODE_SPACING_MARK,
  ENCLOSING_MARK_ = G_UNICODE_ENCLOSING_MARK,
  NON_SPACING_MARK_ = G_UNICODE_NON_SPACING_MARK,
  DECIMAL_NUMBER_ = G_UNICODE_DECIMAL_NUMBER,
  LETTER_NUMBER_ = G_UNICODE_LETTER_NUMBER,
  OTHER_NUMBER_ = G_UNICODE_OTHER_NUMBER,
  CONNECT_PUNCTUATION_ = G_UNICODE_CONNECT_PUNCTUATION,
  DASH_PUNCTUATION_ = G_UNICODE_DASH_PUNCTUATION,
  CLOSE_PUNCTUATION_ = G_UNICODE_CLOSE_PUNCTUATION,
  FINAL_PUNCTUATION_ = G_UNICODE_FINAL_PUNCTUATION,
  INITIAL_PUNCTUATION_ = G_UNICODE_INITIAL_PUNCTUATION,
  OTHER_PUNCTUATION_ = G_UNICODE_OTHER_PUNCTUATION,
  OPEN_PUNCTUATION_ = G_UNICODE_OPEN_PUNCTUATION,
  CURRENCY_SYMBOL_ = G_UNICODE_CURRENCY_SYMBOL,
  MODIFIER_SYMBOL_ = G_UNICODE_MODIFIER_SYMBOL,
  MATH_SYMBOL_ = G_UNICODE_MATH_SYMBOL,
  OTHER_SYMBOL_ = G_UNICODE_OTHER_SYMBOL,
  LINE_SEPARATOR_ = G_UNICODE_LINE_SEPARATOR,
  PARAGRAPH_SEPARATOR_ = G_UNICODE_PARAGRAPH_SEPARATOR,
  SPACE_SEPARATOR_ = G_UNICODE_SPACE_SEPARATOR,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::UnicodeType>
{ typedef GUnicodeType type; }; 
template<> struct declare_cpptype_of<GUnicodeType>
{ typedef GLib::UnicodeType type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(UriError)
#undef UriError
#endif
enum class UriError {
  FAILED_ = G_URI_ERROR_FAILED,
  BAD_SCHEME_ = G_URI_ERROR_BAD_SCHEME,
  BAD_USER_ = G_URI_ERROR_BAD_USER,
  BAD_PASSWORD_ = G_URI_ERROR_BAD_PASSWORD,
  BAD_AUTH_PARAMS_ = G_URI_ERROR_BAD_AUTH_PARAMS,
  BAD_HOST_ = G_URI_ERROR_BAD_HOST,
  BAD_PORT_ = G_URI_ERROR_BAD_PORT,
  BAD_PATH_ = G_URI_ERROR_BAD_PATH,
  BAD_QUERY_ = G_URI_ERROR_BAD_QUERY,
  BAD_FRAGMENT_ = G_URI_ERROR_BAD_FRAGMENT,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::UriError>
{ typedef GUriError type; }; 
template<> struct declare_cpptype_of<GUriError>
{ typedef GLib::UriError type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(UserDirectory)
#undef UserDirectory
#endif
enum class UserDirectory {
  DIRECTORY_DESKTOP_ = G_USER_DIRECTORY_DESKTOP,
  DIRECTORY_DOCUMENTS_ = G_USER_DIRECTORY_DOCUMENTS,
  DIRECTORY_DOWNLOAD_ = G_USER_DIRECTORY_DOWNLOAD,
  DIRECTORY_MUSIC_ = G_USER_DIRECTORY_MUSIC,
  DIRECTORY_PICTURES_ = G_USER_DIRECTORY_PICTURES,
  DIRECTORY_PUBLIC_SHARE_ = G_USER_DIRECTORY_PUBLIC_SHARE,
  DIRECTORY_TEMPLATES_ = G_USER_DIRECTORY_TEMPLATES,
  DIRECTORY_VIDEOS_ = G_USER_DIRECTORY_VIDEOS,
  N_DIRECTORIES_ = G_USER_N_DIRECTORIES,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::UserDirectory>
{ typedef GUserDirectory type; }; 
template<> struct declare_cpptype_of<GUserDirectory>
{ typedef GLib::UserDirectory type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(VariantClass)
#undef VariantClass
#endif
enum class VariantClass {
  BOOLEAN_ = G_VARIANT_CLASS_BOOLEAN,
  BYTE_ = G_VARIANT_CLASS_BYTE,
  INT16_ = G_VARIANT_CLASS_INT16,
  UINT16_ = G_VARIANT_CLASS_UINT16,
  INT32_ = G_VARIANT_CLASS_INT32,
  UINT32_ = G_VARIANT_CLASS_UINT32,
  INT64_ = G_VARIANT_CLASS_INT64,
  UINT64_ = G_VARIANT_CLASS_UINT64,
  HANDLE_ = G_VARIANT_CLASS_HANDLE,
  DOUBLE_ = G_VARIANT_CLASS_DOUBLE,
  STRING_ = G_VARIANT_CLASS_STRING,
  OBJECT_PATH_ = G_VARIANT_CLASS_OBJECT_PATH,
  SIGNATURE_ = G_VARIANT_CLASS_SIGNATURE,
  VARIANT_ = G_VARIANT_CLASS_VARIANT,
  MAYBE_ = G_VARIANT_CLASS_MAYBE,
  ARRAY_ = G_VARIANT_CLASS_ARRAY,
  TUPLE_ = G_VARIANT_CLASS_TUPLE,
  DICT_ENTRY_ = G_VARIANT_CLASS_DICT_ENTRY,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::VariantClass>
{ typedef GVariantClass type; }; 
template<> struct declare_cpptype_of<GVariantClass>
{ typedef GLib::VariantClass type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GLib {

#if defined(VariantParseError)
#undef VariantParseError
#endif
enum class VariantParseError {
  FAILED_ = G_VARIANT_PARSE_ERROR_FAILED,
  BASIC_TYPE_EXPECTED_ = G_VARIANT_PARSE_ERROR_BASIC_TYPE_EXPECTED,
  CANNOT_INFER_TYPE_ = G_VARIANT_PARSE_ERROR_CANNOT_INFER_TYPE,
  DEFINITE_TYPE_EXPECTED_ = G_VARIANT_PARSE_ERROR_DEFINITE_TYPE_EXPECTED,
  INPUT_NOT_AT_END_ = G_VARIANT_PARSE_ERROR_INPUT_NOT_AT_END,
  INVALID_CHARACTER_ = G_VARIANT_PARSE_ERROR_INVALID_CHARACTER,
  INVALID_FORMAT_STRING_ = G_VARIANT_PARSE_ERROR_INVALID_FORMAT_STRING,
  INVALID_OBJECT_PATH_ = G_VARIANT_PARSE_ERROR_INVALID_OBJECT_PATH,
  INVALID_SIGNATURE_ = G_VARIANT_PARSE_ERROR_INVALID_SIGNATURE,
  INVALID_TYPE_STRING_ = G_VARIANT_PARSE_ERROR_INVALID_TYPE_STRING,
  NO_COMMON_TYPE_ = G_VARIANT_PARSE_ERROR_NO_COMMON_TYPE,
  NUMBER_OUT_OF_RANGE_ = G_VARIANT_PARSE_ERROR_NUMBER_OUT_OF_RANGE,
  NUMBER_TOO_BIG_ = G_VARIANT_PARSE_ERROR_NUMBER_TOO_BIG,
  TYPE_ERROR_ = G_VARIANT_PARSE_ERROR_TYPE_ERROR,
  UNEXPECTED_TOKEN_ = G_VARIANT_PARSE_ERROR_UNEXPECTED_TOKEN,
  UNKNOWN_KEYWORD_ = G_VARIANT_PARSE_ERROR_UNKNOWN_KEYWORD,
  UNTERMINATED_STRING_CONSTANT_ = G_VARIANT_PARSE_ERROR_UNTERMINATED_STRING_CONSTANT,
  VALUE_EXPECTED_ = G_VARIANT_PARSE_ERROR_VALUE_EXPECTED,
  RECURSION_ = G_VARIANT_PARSE_ERROR_RECURSION,
};

} // namespace GLib

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GLib::VariantParseError>
{ typedef GVariantParseError type; }; 
template<> struct declare_cpptype_of<GVariantParseError>
{ typedef GLib::VariantParseError type; }; 


} // namespace repository

} // namespace gi


#endif
