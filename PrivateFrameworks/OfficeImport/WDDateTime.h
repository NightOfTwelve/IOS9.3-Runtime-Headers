//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/WDRun.h>

@class NSDate, WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDDateTime : WDRun
{
    WDCharacterProperties *mProperties;
    NSDate *mDate;
}

- (id)description;
- (int)runType;
- (id)date;
- (void)clearProperties;
- (void)setProperties:(id)arg1;
- (id)properties;
- (id)initWithParagraph:(id)arg1 date:(id)arg2;
- (void)dealloc;

@end

