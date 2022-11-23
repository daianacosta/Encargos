#include <bits/stdc++.h>

void clearBuffers();

// -----------------------------------------------------------------------------------------------------------------------------------------------|

bool validarNumeroIdentificacion(const std::string numeroIdentificacion) { return ((numeroIdentificacion.size() > 10) ? true : false); }

bool validarNombre(const std::string nombrePaciente) { return ((nombrePaciente.size() > 30) ? true : false); }

bool validarEdad(const int edadPaciente) { return ((edadPaciente < 0) ? true : false ); }

bool validarEstatura(const float estaturaPaciente) { return ((estaturaPaciente < 0) ? true : false); }

bool validarPeso(const float pesoPaciente) { return ((pesoPaciente < 0.0) ? true : false); }

bool validarGenero(const int intGenero) {
    bool esValido = false;
    std::vector <int> opcionesValidas = {1, 2};
    for (auto &opcion : opcionesValidas) 
        if (intGenero == opcion) esValido = true;
    return esValido;
}

void intToCharGenero(struct Paciente &paciente) {
    std::vector <char> generos = {'M', 'F'};
    paciente.charGenero = generos.at(paciente.intGenero - 1);
}

bool validarCodigoEmpresa(const std::string codigoEmpresa) { return ((codigoEmpresa.size() > 4) ? true : false); }

// -----------------------------------------------------------------------------------------------------------------------------------------------|

void llenarStruct(struct Paciente &paciente) {
    std::cout << std::endl;

    // ---------------------------------- NUMERO IDENTIFICACION---------------------------------------------| >

    // do {
    //     std::cout << "Ingrese su numero de Identificacion: ";
    //     std::cin >> paciente.numeroIdentificacion;

    //     if (!validarNumeroIdentificacion(paciente.numeroIdentificacion)) break;
    //     else std::cout << "Error: El no. de identificacion debe de tener un maximo de 10 Caracteres" << std::endl;
    // } while (true);

    // clearBuffers();

    // ---------------------------------- NOMBRE------------------------------------------------------------| >

    // do {
    //     std::cout << "Ingrese su nombre: ";
    //     std::getline(std::cin, paciente.nombrePaciente, '\n');

    //     if (!validarNombre(paciente.nombrePaciente)) break;
    //     else std::cout << "Error: El maximo de caracteres es 30" << std::endl;
    // } while (true);

    // clearBuffers();

    // ---------------------------------- EDAD--------------------------------------------------------------| >

    // do {
    //     std::cout << "Ingrese su edad: ";
    //     std::cin >> paciente.edad;

    //     if (!validarEdad(paciente.edad)) break;
    //     else std::cout << "Error: Valor Incorrecto Ingresado" << std::endl;
    // } while (true);

    // clearBuffers();

    // ---------------------------------- ESTATURA ---------------------------------------------------------| >

    // do {
    //     std::cout << "Ingrese su Estatura {Metros}: ";
    //     std::cin >> paciente.estatura;

    //     if (!validarEstatura(paciente.estatura)) break;
    //     else std::cout << "Error: El valor Ingresado debe ser mayor a 0" << std::endl;
    // } while (true);

    // clearBuffers();

    // ---------------------------------- PESO -------------------------------------------------------------| >

    // do {
    //     std::cout << "Ingrese su peso {Kilogramos}: ";
    //     std::cin >> paciente.peso;

    //     if (!validarPeso(paciente.peso)) break;
    //     else std::cout << "Error: El peso ingresado debe ser mayor a 0" << std::endl;
    // } while (true);

    // clearBuffers();

    // ---------------------------------- GENERO -----------------------------------------------------------| >

    // std::cout << "Ingrese su Genero: " << std::endl;
    // std::cout << "1. Masculino" << std::endl;
    // std::cout << "2. Femenino" << std::endl;

    // do {
    //     std::cout << "-> ";
    //     std::cin >> paciente.intGenero;

    //     if (validarGenero(paciente.intGenero)) break;
    //     else std::cout << "Error: Ingrese una opcion valida" << std::endl;
    // } while (true);

    // clearBuffers();

    // intToCharGenero(paciente);

    // ---------------------------------- CODIGO EMPRESA REMISORA -------------------------------------------| >

    // do {
    //     std::cout << "Ingrese el codigo de la Empresa Remisora: ";
    //     std::cin >> paciente.codigoEmpresa;

    //     if (!validarCodigoEmpresa(paciente.codigoEmpresa)) break;
    //     else std::cout << "Error: El codigo debe tener un maximo de 4 digitos" << std::endl;
    // } while (true);

    // clearBuffers();

    // ---------------------------------- FECHA EXAMEN -----------------------------------------------------| >

    std::cout << "Fecha de realizacion del examen" << std::endl;

    int diaExamen, mesExamen, anioExamen;
    do {
        std::cout << "Dia: ";
        std::cin >> diaExamen;
    } while (diaExamen < 0);

    do {
        std::cout << "Mes: ";
        std::cin >> mesExamen;
    } while (mesExamen < 0);

    do {
        std::cout << "Año: ";
        std::cin >> anioExamen;
    } while (anioExamen < 0);

    paciente.fechaExamen = (std::string) (std::to_string(diaExamen) + "-" + std::to_string(mesExamen) + "-" + std::to_string(anioExamen));
    
    clearBuffers();
    

    














}