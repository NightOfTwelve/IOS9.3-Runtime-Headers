//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFMessageDataSection-Protocol.h>

@class MFDataHolder, NSString;

@interface MFBasicMessageDataSection : NSObject <MFMessageDataSection>
{
    MFDataHolder *_dataHolder;
    _Bool _complete;
    _Bool _partial;
    NSString *_partName;
}

@property(retain, nonatomic) NSString *partName; // @synthesize partName=_partName;
@property(nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
@property(nonatomic, getter=isPartial) _Bool partial; // @synthesize partial=_partial;
@property(retain, nonatomic) MFDataHolder *dataHolder; // @synthesize dataHolder=_dataHolder;
- (void)setData:(id)arg1;
- (void)dealloc;

@end

