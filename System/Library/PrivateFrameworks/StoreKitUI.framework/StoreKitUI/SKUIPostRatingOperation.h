@class NSDictionary, NSString, SKUIReviewConfiguration;

@interface SKUIPostRatingOperation : ISOperation {
    NSDictionary *_responseDictionary;
    NSString *_itemID;
    long long _rating;
    SKUIReviewConfiguration *_reviewConfiguration;
}

@property (readonly) NSDictionary *responseDictionary;

- (void).cxx_destruct;
- (void)run;
- (id)initWithRating:(long long)a0 forItemID:(id)a1 reviewConfiguration:(id)a2;

@end
