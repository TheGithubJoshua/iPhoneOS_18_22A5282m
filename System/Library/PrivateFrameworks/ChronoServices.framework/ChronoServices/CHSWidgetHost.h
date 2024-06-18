@class NSString, CHSChronoServicesConnection, CHSWidgetConfiguration;

@interface CHSWidgetHost : NSObject {
    CHSChronoServicesConnection *_connection;
    BOOL _invalid;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) CHSWidgetConfiguration *configuration;

+ (id)new;

- (id)init;
- (id)initWithIdentifier:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 connection:(id)a1;
- (void)dealloc;

@end
