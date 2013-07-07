/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVBulkRequestsItem, NSDictionary;

@interface CoreDAVBulkRequestsSetItem : CoreDAVItem
{
    CoreDAVBulkRequestsItem *_crudItem;
    CoreDAVBulkRequestsItem *_simpleItem;
}

+ (id)copyParseRules;
@property(retain) CoreDAVBulkRequestsItem *simpleItem; // @synthesize simpleItem=_simpleItem;
@property(retain) CoreDAVBulkRequestsItem *crudItem; // @synthesize crudItem=_crudItem;
@property(readonly) NSDictionary *dictRepresentation;
- (id)description;
- (void)dealloc;
- (id)init;

@end
