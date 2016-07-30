//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCERewriteTableIDInfo : NSObject
{
    struct TSUUuidMap _tableIDMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)rollbackMappings:(id)arg1;
- (id)extendMappingWithTableIDs:(const struct TSUUuidMap *)arg1;
- (_Bool)alreadyHaveMappingsForTableIDs:(const struct TSUUuidMap *)arg1;
- (void)saveToMessage:(struct RewriteTableIDInfoArchive *)arg1;
- (id)initFromMessage:(const struct RewriteTableIDInfoArchive *)arg1;
- (id)description;
- (vector_dadc1b26)originalTableIDs;
- (const struct TSUUuidMap *)tableIDMap;
- (id)initWithTableIDMap:(const struct TSUUuidMap *)arg1;

@end
