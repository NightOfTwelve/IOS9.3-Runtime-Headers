//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBCell : NSObject
{
}

+ (void)readXlCell:(struct XlCell *)arg1 edRowInfo:(struct EDRowInfo **)arg2 edRowBlock:(id)arg3 edRowBlocks:(id)arg4 state:(id)arg5;
+ (int)convertEDErrorValueEnumToXl:(int)arg1;
+ (int)convertXlErrorEnumToED:(int)arg1;
+ (int)convertXlCellTypeToED:(int)arg1;

@end

