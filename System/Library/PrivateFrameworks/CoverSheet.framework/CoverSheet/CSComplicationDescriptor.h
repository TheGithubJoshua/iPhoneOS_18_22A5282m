@class NSString, CHSWidgetMetrics, CHSWidget;

@interface CSComplicationDescriptor : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) CHSWidget *widget;
@property (readonly, nonatomic) CHSWidgetMetrics *metrics;
@property (readonly, nonatomic, getter=isBlockedForScreenTimeExpiration) BOOL blockedForScreenTimeExpiration;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)layoutElement;
- (id)descriptorBlockedForScreenTimeExpiration:(BOOL)a0;
- (id)initWithUniqueIdentifier:(id)a0 widget:(id)a1 metrics:(id)a2 blockedForScreenTimeExpiration:(BOOL)a3;

@end
