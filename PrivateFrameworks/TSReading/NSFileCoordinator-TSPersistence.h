//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileCoordinator.h>

@interface NSFileCoordinator (TSPersistence)
+ (_Bool)tsp_coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 filePresenter:(id)arg5 error:(id *)arg6 byAccessor:(CDUnknownBlockType)arg7;
+ (_Bool)tsp_coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 filePresenter:(id)arg3 error:(id *)arg4 byAccessor:(CDUnknownBlockType)arg5;
+ (_Bool)tsp_coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 filePresenter:(id)arg5 error:(id *)arg6 byAccessor:(CDUnknownBlockType)arg7;
+ (_Bool)tsp_coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 filePresenter:(id)arg3 error:(id *)arg4 byAccessor:(CDUnknownBlockType)arg5;
+ (void)tsp_removeFilePresenter:(id)arg1;
+ (void)tsp_addFilePresenter:(id)arg1;
@end

