{
interface: functions for XLSX zip (delphi)
}

function SaveXmlssToXLSX(var XMLSS: TZEXMLSS; FileName: string; const SheetsNumbers:array of integer;
                         const SheetsNames: array of string; TextConverter: TAnsiToCPConverter; CodePageName: string; BOM: ansistring = ''): integer; overload;
function SaveXmlssToXLSX(var XMLSS: TZEXMLSS; FileName: string; const SheetsNumbers: array of integer;
                         const SheetsNames: array of string): integer; overload;
function SaveXmlssToXLSX(var XMLSS: TZEXMLSS; FileName: string): integer; overload;


function ReadXLSX(var XMLSS: TZEXMLSS; FileName: string): integer;
