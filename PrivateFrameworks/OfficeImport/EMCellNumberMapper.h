//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class EDStyle, EDWorkbook;

__attribute__((visibility("hidden")))
@interface EMCellNumberMapper : CMMapper
{
    double edValue;
    EDStyle *edStyle;
    EDWorkbook *workbook;
}

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)insertRedSpanIfNegativeAt:(id)arg1;
- (id)formatValueAsNumber;
- (id)initWithDoubleValue:(double)arg1 style:(id)arg2 workbook:(id)arg3 parent:(id)arg4;

@end

