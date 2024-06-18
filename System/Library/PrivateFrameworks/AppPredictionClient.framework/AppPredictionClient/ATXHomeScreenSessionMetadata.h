@class NSString;

@interface ATXHomeScreenSessionMetadata : NSObject <ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *widgetUniqueId;
@property (retain, nonatomic) NSString *widgetBundleId;
@property (nonatomic) BOOL isWidgetInTodayView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithWidgetUniqueId:(id)a0 widgetBundleId:(id)a1 isWidgetInTodayView:(BOOL)a2;
- (BOOL)isEqualToATXHomeScreenSessionMetadata:(id)a0;

@end
