//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface ICCameraFolderProperties : NSObject
{
    NSMutableArray *_files;
    NSMutableArray *_folders;
}

@property(retain) NSMutableArray *folders; // @synthesize folders=_folders;
@property(retain) NSMutableArray *files; // @synthesize files=_files;
- (void)finalize;
- (void)dealloc;

@end

