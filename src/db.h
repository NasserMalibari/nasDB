#ifndef DB_H
#define DB_H

#include<string>

namespace nasDB {
    auto add(int a, int b) -> int;

    class db {
        private:
            unsigned int size;

    };


    template <typename... types>
    class row {
        private:
            void *data;
        

    };

    class DB_type {
        public:

            virtual unsigned int size() = 0;
            virtual std::string name() = 0;

            virtual ~DB_type() {};
    };


    class INT : public  DB_type {
        public:
            unsigned int size() override {
                return sizeof(int);
            }

            std::string name() override {
                return std::string("integer");
            }

    };

    class BOOL : public  DB_type {
        public:
            unsigned int size() override {
                return sizeof(bool);
            }

            std::string name() override {
                return std::string("bool");
            }
    };

    class STRING : public  DB_type {
        public:
            STRING(unsigned int size) : size_{size} {}

            unsigned int size() override {
                return sizeof(char) * size_;
            }

            std::string name() override {
                return std::string("bool");
            }
        private:
            // max size of string
            unsigned int size_;
    };






}

#endif