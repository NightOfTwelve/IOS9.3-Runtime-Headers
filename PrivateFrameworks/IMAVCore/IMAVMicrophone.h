//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMAVMicrophone : NSObject
{
    id _internalDevice;
}

- (id)description;
@property(readonly, retain, nonatomic) NSString *uniqueID;
- (id)_AVAudioDevice;
@property(readonly, retain, nonatomic) NSString *name;
- (void)dealloc;
- (id)init;
- (id)_initWithAVAudioDevice:(id)arg1;

@end

