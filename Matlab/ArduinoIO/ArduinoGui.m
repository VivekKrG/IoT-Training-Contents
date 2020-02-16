function varargout = ArduinoGui(varargin)
% ARDUINOGUI MATLAB code for ArduinoGui.fig
%      ARDUINOGUI, by itself, creates a new ARDUINOGUI or raises the existing
%      singleton*.
%
%      H = ARDUINOGUI returns the handle to a new ARDUINOGUI or the handle to
%      the existing singleton*.
%
%      ARDUINOGUI('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in ARDUINOGUI.M with the given input arguments.
%
%      ARDUINOGUI('Property','Value',...) creates a new ARDUINOGUI or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before ArduinoGui_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to ArduinoGui_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help ArduinoGui

% Last Modified by GUIDE v2.5 19-Jan-2019 11:43:17

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @ArduinoGui_OpeningFcn, ...
                   'gui_OutputFcn',  @ArduinoGui_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before ArduinoGui is made visible.
function ArduinoGui_OpeningFcn(hObject, eventdata, handles, varargin)

global b
b=arduino('COM3');
b.pinMode(D1,'OUTPUT');
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to ArduinoGui (see VARARGIN)

% Choose default command line output for ArduinoGui
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);


% UIWAIT makes ArduinoGui wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = ArduinoGui_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in pushbutton1.
function pushbutton1_Callback(hObject, eventdata, handles)
global b
b.digitalWrite(13,1)



    
% hObject    handle to pushbutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in pushbutton2.
function pushbutton2_Callback(hObject, eventdata, handles)
global b
b.digitalWrite(13,0)



% hObject    handle to pushbutton2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in pushbutton3.
function pushbutton3_Callback(hObject, eventdata, handles)
global b
delete(b);
% hObject    handle to pushbutton3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
