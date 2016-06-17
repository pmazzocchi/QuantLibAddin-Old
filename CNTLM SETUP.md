CNTLM SETUP
===============
---------------

1.	Go to **cntlm.sourceforge.net** and download the latest version;
2.	Run the .exe file;
3.	Edit the file **cntlm.ini** (you can find it in: *C:\Program Files (x86)\Cntlm*) with:

  - Username: __account name__;

  - Domain: *"_YourDomain_"*;

  - Proxy: *"_YourProxy_"*;
4.	Run *command Prompt*;
5.  Go to **_cntlm folder_**;

  - Run SHIFT + Right Click on cntml folder

  - Select: "_Open command window here_"

6.  Run the following command: **_cntlm –M https://www.google.it_** and enter your access password;
7.	Copy the lines (Right Click-->Edit-->Mark-->Copy):

  - *Auth* ........

  - *PassNT* ........

  - *PassLM* ........


8.  Paste them in file “*cntlm.ini*” under line “*domain*”;
9.	Go to “**Computer Management**“ (you can search it using the start menu);
10.	Go to “**_Service and Applications_**”,  “**_Services_**”  and start the “**_Cntlm Authentication Proxy_**”;
11. Restart your computer.

**Remember**: you have to repeat points 4 to 8 every time you change your access password.

---------------
