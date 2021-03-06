//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PointerUIServices/NSCopying-Protocol.h>
#import <PointerUIServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface PSPointerShape : NSObject <NSCopying, NSSecureCoding>
{
    struct CGPath *_path;
    _Bool _usesEvenOddFillRule;
    long long _shapeType;
    double _cornerRadius;
    NSString *_cornerCurve;
    struct CGRect _bounds;
}

+ (_Bool)supportsSecureCoding;
+ (id)customShapeWithPath:(struct CGPath *)arg1;
+ (id)customShapeWithPath:(struct CGPath *)arg1 usesEvenOddFillRule:(_Bool)arg2;
+ (id)roundedRectWithSize:(struct CGSize)arg1 cornerRadius:(double)arg2;
+ (id)roundedRectWithBounds:(struct CGRect)arg1 cornerRadius:(double)arg2;
+ (id)roundedRectWithBounds:(struct CGRect)arg1 cornerRadius:(double)arg2 cornerCurve:(id)arg3;
+ (id)circleWithSize:(struct CGSize)arg1;
+ (id)circleWithBounds:(struct CGRect)arg1;
+ (id)systemShape;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool usesEvenOddFillRule; // @synthesize usesEvenOddFillRule=_usesEvenOddFillRule;
@property(readonly, nonatomic) const struct CGPath *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) NSString *cornerCurve; // @synthesize cornerCurve=_cornerCurve;
@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) long long shapeType; // @synthesize shapeType=_shapeType;
- (struct CGPath *)_createMutablePathByDecodingData:(id)arg1;
@property(readonly, nonatomic) struct CGSize size;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)_initWithShapeType:(long long)arg1 bounds:(struct CGRect)arg2;

@end

