//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSKeyValueContainerClass : NSObject
{
    Class _originalClass;
    CDUnknownFunctionPointerType _cachedObservationInfoImplementation;
    CDUnknownFunctionPointerType _cachedSetObservationInfoImplementation;
    _Bool _cachedSetObservationInfoTakesAnObject;
    struct {
        Class _field1;
        Class _field2;
        struct __CFSet *_field3;
        struct __CFDictionary *_field4;
        struct _opaque_pthread_mutex_t _field5;
        _Bool _field6;
    } *_notifyingInfo;
}

- (id)description;
- (id)initWithOriginalClass:(Class)arg1;

@end

