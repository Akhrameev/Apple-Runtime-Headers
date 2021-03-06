//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Named Structures

struct AlgorithmIdentifier {
    struct heim_oid _field1;
    struct heim_base_data *_field2;
};

struct Attribute {
    struct heim_oid _field1;
    struct Attribute_value _field2;
};

struct Attribute_value {
    unsigned int _field1;
    struct heim_base_data *_field2;
};

struct CMSIdentifier {
    int _field1;
    union {
        struct IssuerAndSerialNumber _field1;
        struct heim_base_data _field2;
    } _field2;
};

struct IssuerAndSerialNumber {
    struct heim_base_data _field1;
    struct heim_integer _field2;
};

struct SignerInfo {
    int _field1;
    struct CMSIdentifier _field2;
    struct AlgorithmIdentifier _field3;
    struct SignerInfo_signedAttrs *_field4;
    struct AlgorithmIdentifier _field5;
    struct heim_base_data _field6;
    struct SignerInfo_unsignedAttrs *_field7;
};

struct SignerInfo_signedAttrs {
    unsigned int len;
    struct Attribute *val;
};

struct SignerInfo_unsignedAttrs {
    unsigned int len;
    struct Attribute *val;
};

struct ccdigest_info {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    char *_field5;
    void *_field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
};

struct heim_base_data {
    unsigned int _field1;
    void *_field2;
};

struct heim_integer {
    unsigned int _field1;
    void *_field2;
    int _field3;
};

struct heim_oid {
    unsigned int length;
    unsigned int *components;
};

