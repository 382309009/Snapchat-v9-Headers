//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCChunkLoader : NSObject
{
}

+ (id)sectionsFromChunkDictionary:(id)arg1 error:(id *)arg2;
+ (id)copySections:(id)arg1 withIdModifier:(id)arg2;
+ (void)boostLoadingChunkWithDownloadRequest:(id)arg1;
+ (void)loadChunkWithDownloadRequest:(id)arg1 endpoint:(id)arg2 isAd:(BOOL)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
+ (void)loadChunkWithEndpoint:(id)arg1 dSnapId:(id)arg2 isAd:(BOOL)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
+ (id)newDownloadRequestWithEndpoint:(id)arg1 key:(id)arg2;

@end
