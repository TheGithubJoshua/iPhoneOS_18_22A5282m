@class NSDictionary, SKUIReviewMetadata;

@interface SKUIPostReviewOperation : ISOperation {
    NSDictionary *_responseDictionary;
    SKUIReviewMetadata *_review;
}

@property (readonly) NSDictionary *responseDictionary;

- (void).cxx_destruct;
- (void)run;
- (id)_httpBody;
- (id)initWithReviewMetadata:(id)a0;

@end
