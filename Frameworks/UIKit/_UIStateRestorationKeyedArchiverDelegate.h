//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSKeyedArchiverDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIStateRestorationKeyedArchiverDelegate : NSObject <NSKeyedArchiverDelegate>
{
}

+ (id)sharedDelegate;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

