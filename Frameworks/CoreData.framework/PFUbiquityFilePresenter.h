/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSFilePresenter.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSURL, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityFilePresenter : NSObject <NSFilePresenter>
{
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_localPeerID;
    NSURL *_presentedItemURL;
    unsigned long long _lastFSEventIdentifier;
    NSObject<OS_dispatch_queue> *_processingQueue;
    BOOL _scheduledProcessingBlock;
    NSMutableArray *_pendingURLs;
    int _pendingURLsLock;
    NSMutableDictionary *_locationToSafeSaveFile;
    NSMutableDictionary *_locationToStatus;
}

+ (id)sharedPrivateOperationQueue;
+ (void)initialize;
@property(readonly, nonatomic) NSDictionary *locationToStatus; // @synthesize locationToStatus=_locationToStatus;
@property(readonly) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
@property(readonly) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;
- (void)unregisterSafeSaveFile:(id)arg1;
- (void)registerSafeSaveFile:(id)arg1;
- (void)printStatus:(id)arg1;
- (void)setupAssistantDiscoveredPathsFromMetadataQuery:(id)arg1;
- (void)logsWereScheduled:(id)arg1;
- (void)logImportWasCancelled:(id)arg1;
- (void)logWasImported:(id)arg1;
- (void)logWasExported:(id)arg1;
- (void)exporterDidMoveLog:(id)arg1;
- (id)retainedStatusForLocation:(id)arg1;
- (unsigned long long)lastPresentedItemEventIdentifier;
- (void)setLastPresentedItemEventIdentifier:(unsigned long long)arg1;
- (void)processPendingURLs;
- (void)presentedSubitemUbiquityDidChangeAtURL:(id)arg1;
- (void)presentedSubitemDidChangeAtURL:(id)arg1;
- (void)relinquishPresentedItemToWriter:(id)arg1;
- (void)relinquishPresentedItemToReader:(id)arg1;
@property(readonly) NSOperationQueue *presentedItemOperationQueue;
@property(readonly) NSURL *presentedItemURL;
- (id)description;
- (void)dealloc;
- (id)initWithUbiquityRootLocation:(id)arg1 localPeerID:(id)arg2 processingQueue:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly) NSURL *primaryPresentedItemURL;

@end
