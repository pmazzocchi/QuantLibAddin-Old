GIT SETUP
=========
---------------

1. First go to **_https://github.com/_** and create a git account;
2. Go to **_https://github.com/lballabio/QuantLib_** and press **Fork**;
3. Go to **_https://github.com/paolomazzocchi/QuantLibAddin-Old_** and press **Fork**;
4. Go to **msysgit.github.io** and download the program;
5. Run the _.exe_ file;
6. Use git from git bash only, checkout windows style, commit unix style line endings;
7. Run **Git Bash** (Right Click-->Git Bash Here);
8. Run the following commands (in red enter your credentials):

  -	**$ git config --global user.name** "_Digit your Name_"

  - **$ git config --global user.email** DigitYourEmail@example.com

  - **$ git config -–global http.proxy** YourProxy

  - Run **$ git config –-list** to see the modified settings;

9. Run the following command (you have to use the username that you use in _github.com_):
<ul>
  - **$ git clone _https://github.com/username/quantlib_**;
</ul>
<br/>
10. Go to: /c/Users/access_user/quantlib;
11.	Run the following command to move to a specific branch:

  - **$ git checkout** _NameOfBranch_+

  - **Remember**: For the last BIMI version use branch: **master**;

12.	To see which remote servers you have configured, you can run the command:
<ul>
  - **$ git remote –v**
</ul>
<br/>

13.	To add a remote server, you can run the command:
<ul>
  - **$ git remote add** _RemoteServerShortNameUrl_;
</ul>
<br/>

14. To automatically fetch and then merge a remote branch into your current branch, you can run the command:
<ul>
 - **$ git pull** _RemoteServerShortnameBranch_;
 </ul>
 <br/>
15. For a better git comprension, you can download the Free eBook: "_Pro Git Book_" from this link:

 - **_http://git-scm.com/book/en/v2_**.


 --------------
