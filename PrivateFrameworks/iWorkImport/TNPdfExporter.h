//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TNRenderingExporter.h>

#import <iWorkImport/TSKEncryptedDocumentExporter-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TNPdfExporter : TNRenderingExporter <TSKEncryptedDocumentExporter>
{
    NSDictionary *mOptions;
}

- (void)setOptions:(id)arg1;
- (void)dealloc;
- (void)setCopyPassphrase:(id)arg1 hint:(id)arg2;
- (void)setPrintPassphrase:(id)arg1 hint:(id)arg2;
- (void)setPassphrase:(id)arg1 hint:(id)arg2;
- (id)p_renderingExporterDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

