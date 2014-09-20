
@REM DOXYGEN=/home/erik/doxygen-1.8.7/bin/doxygen
@REM 
@REM all : reposit.doxy
@REM 	$(DOXYGEN) reposit.doxy
@REM 	cp tabs.css html
@REM 	cp ql.css html
@REM 	mkdir -p html/images
@REM 	#cp -r images html
@REM 	cp -f images/*.ico images/*.jpg images/*.png html/images
@REM 
@REM clean :
@REM 	rm -rf html

"C:\Program Files\doxygen\bin\doxygen.exe" reposit.doxy

