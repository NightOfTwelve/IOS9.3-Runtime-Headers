//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/ICSearchOperation.h>

@class ICAttachment;

@interface ICSearchAttachmentOperation : ICSearchOperation
{
}

- (unsigned long long)relevanceByPerformingSearch;
@property(readonly) ICAttachment *attachment;
- (id)initWithAttachment:(id)arg1 searchString:(id)arg2;

@end

