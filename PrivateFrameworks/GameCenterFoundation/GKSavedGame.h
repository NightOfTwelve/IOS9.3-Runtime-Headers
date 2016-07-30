//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GameCenterFoundation/NSCopying-Protocol.h>

@class NSDate, NSString, NSURL;

@interface GKSavedGame : NSObject <NSCopying>
{
    NSString *_name;
    NSString *_deviceName;
    NSDate *_modificationDate;
    NSURL *_fileURL;
}

@property(retain) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

