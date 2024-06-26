@class NSUUID, NSArray, NSData, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface ATXResponse : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_appClipQueue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *predictedApps;
@property (readonly, nonatomic) NSArray *predictions;
@property (readonly, nonatomic) NSArray *proactiveSuggestions;
@property (readonly, nonatomic) NSUUID *blendingModelUICacheUpdateUUID;
@property (readonly, nonatomic) NSData *cacheFileData;

- (id)initWithCoder:(id)a0;
- (id)jsonRawData;
- (id)init;
- (id)json;
- (unsigned long long)hash;
- (BOOL)isEqualToResponse:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)jsonDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithPredictions:(id)a0 proactiveSuggestions:(id)a1 uuid:(id)a2 cacheFileData:(id)a3 blendingUICacheUpdateUUID:(id)a4 error:(id)a5;
- (id)initWithPredictions:(id)a0 cacheFileData:(id)a1 error:(id)a2;
- (void)enumerateAtxSearchResults:(id /* block */)a0;

@end
