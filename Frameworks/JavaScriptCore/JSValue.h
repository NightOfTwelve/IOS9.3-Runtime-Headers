//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JSContext;

@interface JSValue : NSObject
{
    struct OpaqueJSValue *m_value;
    JSContext *_context;
}

+ (id)valueWithUndefinedInContext:(id)arg1;
+ (id)valueWithNullInContext:(id)arg1;
+ (id)valueWithNewErrorFromMessage:(id)arg1 inContext:(id)arg2;
+ (id)valueWithNewRegularExpressionFromPattern:(id)arg1 flags:(id)arg2 inContext:(id)arg3;
+ (id)valueWithNewArrayInContext:(id)arg1;
+ (id)valueWithNewObjectInContext:(id)arg1;
+ (id)valueWithUInt32:(unsigned int)arg1 inContext:(id)arg2;
+ (id)valueWithInt32:(int)arg1 inContext:(id)arg2;
+ (id)valueWithDouble:(double)arg1 inContext:(id)arg2;
+ (id)valueWithBool:(_Bool)arg1 inContext:(id)arg2;
+ (id)valueWithObject:(id)arg1 inContext:(id)arg2;
+ (id)valueWithSize:(struct CGSize)arg1 inContext:(id)arg2;
+ (id)valueWithRect:(struct CGRect)arg1 inContext:(id)arg2;
+ (id)valueWithRange:(struct _NSRange)arg1 inContext:(id)arg2;
+ (id)valueWithPoint:(struct CGPoint)arg1 inContext:(id)arg2;
+ (SEL)selectorForValueToStruct:(const char *)arg1;
+ (SEL)selectorForStructToValue:(const char *)arg1;
+ (id)valueWithJSValueRef:(struct OpaqueJSValue *)arg1 inContext:(id)arg2;
@property(readonly) JSContext *context; // @synthesize context=_context;
- (id)invokeMethod:(id)arg1 withArguments:(id)arg2;
- (id)constructWithArguments:(id)arg1;
- (id)callWithArguments:(id)arg1;
- (_Bool)isInstanceOf:(id)arg1;
- (_Bool)isEqualWithTypeCoercionToObject:(id)arg1;
- (_Bool)isEqualToObject:(id)arg1;
@property(readonly) _Bool isDate;
@property(readonly) _Bool isArray;
@property(readonly) _Bool isObject;
@property(readonly) _Bool isString;
@property(readonly) _Bool isNumber;
@property(readonly) _Bool isBoolean;
@property(readonly) _Bool isNull;
@property(readonly) _Bool isUndefined;
- (void)setValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)valueAtIndex:(unsigned long long)arg1;
- (void)defineProperty:(id)arg1 descriptor:(id)arg2;
- (_Bool)hasProperty:(id)arg1;
- (_Bool)deleteProperty:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (id)toDictionary;
- (id)toArray;
- (id)toDate;
- (id)toString;
- (id)toNumber;
- (unsigned int)toUInt32;
- (int)toInt32;
- (double)toDouble;
- (_Bool)toBool;
- (id)toObjectOfClass:(Class)arg1;
- (id)toObject;
- (struct OpaqueJSValue *)JSValueRef;
- (struct CGSize)toSize;
- (struct CGRect)toRect;
- (struct _NSRange)toRange;
- (struct CGPoint)toPoint;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithValue:(struct OpaqueJSValue *)arg1 inContext:(id)arg2;
- (id)init;

@end

