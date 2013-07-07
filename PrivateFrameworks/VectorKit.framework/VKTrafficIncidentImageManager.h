/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCache;

@interface VKTrafficIncidentImageManager : NSObject
{
    NSCache *_imageCache;
}

+ (id)sharedManager;
- (id)iconForIncidentType:(int)arg1 contentScale:(float)arg2;
- (id)imageForIncidentType:(int)arg1 contentScale:(float)arg2;
- (void)dealloc;

@end
