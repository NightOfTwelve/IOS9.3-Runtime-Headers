//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/NSFastEnumeration-Protocol.h>

__attribute__((visibility("hidden")))
@interface OITSUCFSetEnumerator : NSObject <NSFastEnumeration>
{
    void *mInlineObjects[16];
    const void **mObjects;
    long long mCount;
    long long mIndex;
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)allObjects;
- (id)nextObject;
- (id)initWithCFSet:(struct __CFSet *)arg1;
- (void)dealloc;

@end

