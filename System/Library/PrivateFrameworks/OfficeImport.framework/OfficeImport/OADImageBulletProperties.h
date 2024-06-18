@class OADBlipRef;

@interface OADImageBulletProperties : OADBulletProperties {
    OADBlipRef *mImage;
}

- (id)image;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBlipRef:(id)a0;

@end
