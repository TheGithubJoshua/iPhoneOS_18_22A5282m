@class NSString, NSArray;
@protocol NSCopying;

@interface PKPayLaterStackedLabelRow : NSObject <PKPayLaterCollectionViewRow> {
    NSArray *_sources;
}

@property (nonatomic) double paddingBetweenRows;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSources:(id)a0;
- (Class)cellClass;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)configureCell:(id)a0;

@end
