%
% Beamer header file for markdown-based slide source files
%
% Shao-Ching Huang
%

\usefonttheme[onlymath]{serif}

%\usepackage{tcolorbox} % conflict with pythontex

\setbeamertemplate{itemize items}[circle]
\setbeamercolor{itemize item}{fg=black}
\setbeamercolor{frametitle}{fg=black!50}
\setbeamercolor{title}{bg=black!80,fg=white}

\colorlet{frametitledarkgray}{black!80}

\setbeamercolor{frametitle}{bg=frametitledarkgray,fg=white}

%
% section page
%
\AtBeginSection[]{
\begin{frame}
\vfill
\centering
\begin{beamercolorbox}[sep=8pt,center,shadow=true,rounded=true]{title}
\usebeamerfont{title}\insertsectionhead\par%
\end{beamercolorbox}
\vfill
\end{frame}
}

%
% stretch
%
%   An individual markdown slide can \setstretch{} which is effective only within that slide
%
\usepackage{setspace}
%\let\oldframetitle\frametitle% Store \frametitle in \oldframetitle
%\renewcommand{\frametitle}[1]{%
%      \oldframetitle{#1}\setstretch{1.5}}

\setbeamertemplate{footline}{
\leavevmode%
\hbox{%
    \begin{beamercolorbox}[wd=.333333\paperwidth,ht=2.25ex,dp=1ex,center]{author in /foot}%
    \usebeamerfont{title in head/foot}%\insertshortauthor
    \end{beamercolorbox}%
    \begin{beamercolorbox}[wd=.333333\paperwidth,ht=2.25ex,dp=1ex,center]{title in foot}%
    \usebeamerfont{title in head/foot}%\insertshorttitle
    \end{beamercolorbox}%
    \begin{beamercolorbox}[wd=.333333\paperwidth,ht=2.25ex,dp=1ex,right]{date in foot}%
    \usebeamerfont{date in head/foot}\hspace*{2em}
    \insertframenumber{} / \inserttotalframenumber\hspace*{2ex}
    \end{beamercolorbox}}%
    \vskip0pt%
}
%\makeatother

\institute{HPC Research, IDRE/RTG\\University of California, Los Angeles}
