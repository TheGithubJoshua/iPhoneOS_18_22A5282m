@class NSString, NSURL;

@interface OCPPackageRelationship : NSObject {
    NSString *mIdentifier;
    NSString *mType;
    int mTargetMode;
    NSURL *mTargetLocation;
}

- (void).cxx_destruct;
- (id)identifier;
- (id)type;
- (int)targetMode;
- (id)targetLocation;
- (id)initWithXmlElement:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 baseLocation:(id)a1;
- (void)readFromElement:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 baseLocation:(id)a1;

@end
