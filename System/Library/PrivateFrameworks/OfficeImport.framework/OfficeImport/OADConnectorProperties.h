@class OADConnection;

@interface OADConnectorProperties : OADShapeProperties {
    OADConnection *mFrom;
    OADConnection *mTo;
}

+ (id)defaultProperties;

- (id)init;
- (id)initWithDefaults;
- (void).cxx_destruct;
- (id)description;
- (id)from;
- (id)to;

@end
