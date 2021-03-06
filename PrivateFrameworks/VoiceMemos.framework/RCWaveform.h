/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray;

@interface RCWaveform : NSObject <NSCoding>
{
    NSArray *_segments;
}

+ (id)waveformWithContentsOfURL:(id)arg1;
+ (id)waveformPathForSavedRecordingPath:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSArray *segments; // @synthesize segments=_segments;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)saveContentsToURL:(id)arg1;
- (id)initWithSegments:(id)arg1;

@end

