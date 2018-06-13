from setuptools import setup, Extension

module = Extension('bytes_warning', sources=['bytes_warning.c'])

with open("README.md", "r") as fh:
    long_description = fh.read()

setup(
    name = 'bytes-warning',
    version = '0.1',
    author='David Szotten',
    author_email='davidszotten@gmail.com',
    description = """\
Hack to set the BytesWarning flag in environments where you can't pass
arguments to the python interpreter, (like uwsgi)
""",
    long_description=long_description,
    long_description_content_type="text/markdown",
    url="https://github.com/davidszotten/bytes-warning",
    classifiers=(
        "Programming Language :: Python :: 3",
        "License :: OSI Approved :: MIT License",
        "Operating System :: OS Independent",
    ),
    ext_modules = [module],
)
