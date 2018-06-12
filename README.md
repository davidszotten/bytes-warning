# Bytes-warning

Hack to set the BytesWarning flag in environments where you can't pass
arguments to the python interpreter, (like uwsgi)

## Installation

    $ pip install bytes_warning

## Usage

    import warnings, bytes_warning
    bytes_warning.set_flag(1)
    warnings.filterwarnings('default', category=BytesWarning)

## License

MIT
