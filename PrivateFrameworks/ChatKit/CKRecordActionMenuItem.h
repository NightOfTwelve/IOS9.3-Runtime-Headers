//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKActionMenuItem.h>

@class NSDate;

@interface CKRecordActionMenuItem : CKActionMenuItem
{
    _Bool _wasSelected;
    NSDate *_dateSelected;
}

@property(retain, nonatomic) NSDate *dateSelected; // @synthesize dateSelected=_dateSelected;
@property(nonatomic) _Bool wasSelected; // @synthesize wasSelected=_wasSelected;
- (void)updateForState:(long long)arg1 touchInside:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;

@end

