//
// Created by RLIGAYE on 4/27/2020.
//

#ifndef ALGORITHMS_STATUS_H
#define ALGORITHMS_STATUS_H
#pragma once

enum class Status {
    Pending,
    Approved,
    Cancelled

};

enum class FileError{
    notFound,
    ok
};
enum class NetworkError{
    disconnected,
    ok
};

#endif //ALGORITHMS_STATUS_H
