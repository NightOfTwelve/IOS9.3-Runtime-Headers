//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MDPlistBytes : NSObject
{
    unsigned long long _byteVector;
    unsigned int _byteVectorCnt;
    unsigned int _byteVectorCapacity;
    unsigned int _isBad:16;
    unsigned int _shouldDeallocate:1;
    unsigned int _isMutable:1;
    unsigned int _isMutating:1;
    unsigned int _didFinalize:1;
    unsigned int _useMalloc:1;
    struct __CFArray *_rleQueue;
    unsigned long long *_wrapperPtr;
    unsigned long long *_uidVector;
    int _uidCount;
    int _uidCapacity;
}

+ (struct __MDPlistBytes *)nullObjectPlistBytes;
+ (void)enumerateObjectsFromPlistBytes:(char *)arg1 count:(unsigned int)arg2 shouldDeallocate:(_Bool)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (struct __MDPlistBytes *)emptyDictionaryPlistBytes;
+ (struct __MDPlistBytes *)emptyArrayPlistBytes;
+ (struct __MDPlistBytes *)createPlistBytes:(id)arg1;
+ (struct __MDPlistBytes *)createDictionaryPlistBytesUsingBlock:(CDUnknownBlockType)arg1;
+ (struct __MDPlistBytes *)createArrayPlistBytesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)createDispatchData;
- (struct __CFData *)copyDataWithBytesNoCopy;
- (struct __CFData *)copyData;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (unsigned long long)_cfTypeID;
- (void)finalize;
- (void)dealloc;
- (id)initWithByteVector:(char *)arg1 count:(unsigned int)arg2 shouldDeallocate:(_Bool)arg3;

@end

