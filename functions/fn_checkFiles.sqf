
if (isNil "filesChecked") then {
    filesChecked = true;
    private _filesToCheck = [
        "path\to\file1.pbo",
        "path\to\file2.pbo"
    ];

    {
        if (!(fileExists _x)) then {
            diag_log format ["Erro: O arquivo %1 está faltando.", _x];
        };
    } forEach _filesToCheck;
};
