//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSMutableData, NSString, NSURL, NSURLConnection, UIImage;

@interface GADCachedFile : NSObject
{
    id <GADCachedFileDelegate> _delegate;
    NSURL *_sourceURL;
    unsigned int _cachePolicy;
    NSString *_filePath;
    NSURL *_HTTPDestinationURL;
    int _HTTPStatusCode;
    NSDictionary *_HTTPHeaders;
    NSURLConnection *_connection;
    NSMutableData *_receivedData;
    NSString *_receivedModificationDate;
}

+ (id)headersForResponse:(id)arg1;
+ (id)formatterForHTTPDate;
@property(copy, nonatomic) NSString *receivedModificationDate; // @synthesize receivedModificationDate=_receivedModificationDate;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) NSDictionary *HTTPHeaders; // @synthesize HTTPHeaders=_HTTPHeaders;
@property(nonatomic) int HTTPStatusCode; // @synthesize HTTPStatusCode=_HTTPStatusCode;
@property(retain, nonatomic) NSURL *HTTPDestinationURL; // @synthesize HTTPDestinationURL=_HTTPDestinationURL;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) unsigned int cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(nonatomic) __weak id <GADCachedFileDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)saveHeadersFromResponse:(id)arg1;
- (void)cleanUpConnection;
- (void)saveDataToFile;
- (void)processResponse:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)clear;
- (void)invalidate;
- (void)cancel;
- (void)validateWithCacheBuster;
- (void)validate;
@property(readonly, nonatomic) UIImage *contentAsImage;
@property(readonly, copy, nonatomic) NSString *contentAsString;
@property(readonly, copy, nonatomic) NSData *contentAsData;
- (void)beginFetchWithCacheBuster:(BOOL)arg1;
- (void)validateWithDelegate:(id)arg1 URL:(id)arg2;
@property(readonly, copy, nonatomic) NSString *fileModificationDate;
@property(readonly, nonatomic) BOOL fileExists;
- (id)description;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end
