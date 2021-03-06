//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSSecureCoding-Protocol.h>

@protocol MTLBuffer;

@interface ARGeometrySource : NSObject <NSSecureCoding>
{
    id <MTLBuffer> _buffer;
    long long _count;
    unsigned long long _format;
    long long _componentsPerVector;
    long long _offset;
    long long _stride;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long stride; // @synthesize stride=_stride;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(nonatomic) long long componentsPerVector; // @synthesize componentsPerVector=_componentsPerVector;
@property(nonatomic) unsigned long long format; // @synthesize format=_format;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) id <MTLBuffer> buffer; // @synthesize buffer=_buffer;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)componentSize;
- (id)initWithBuffer:(id)arg1 count:(long long)arg2 format:(unsigned long long)arg3 componentsPerVector:(long long)arg4 offset:(long long)arg5 stride:(long long)arg6;

@end

