@interface PBContextMenuPasteButtonTag : PBPasteButtonTag

@property (readonly) unsigned int secureName;
@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) struct CGPoint { double x; double y; } titleOrigin;
@property (readonly) long long layoutSize;
@property (readonly) BOOL hasTrailingGutter;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)resolvedStyleForStyle:(id)a0;
- (id)_acceptCalloutBarPasteButtonTagVisit:(id /* block */)a0 systemInputAssistantPasteButtonTagVisit:(id /* block */)a1 undoInteractionHUDIconPasteButtonTagVisit:(id /* block */)a2 undoInteractionHUDTextPasteButtonTagVisit:(id /* block */)a3 contextMenuPasteButtonTagVisit:(id /* block */)a4 editMenuPasteButtonTagVisit:(id /* block */)a5;
- (unsigned long long)authenticationMessageContextForStyle:(id)a0;
- (float)backgroundStatisticsFailingContrastForStyle:(id)a0;
- (float)backgroundStatisticsForegroundForStyle:(id)a0;
- (float)backgroundStatisticsPassingContrastForStyle:(id)a0;
- (struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; })backgroundStatisticsRegionForStyle:(id)a0;
- (id)initWithSecureName:(unsigned int)a0 size:(struct CGSize { double x0; double x1; })a1 titleOrigin:(struct CGPoint { double x0; double x1; })a2 layoutSize:(long long)a3 hasTrailingGutter:(BOOL)a4;
- (unsigned int)secureNameForStyle:(id)a0;

@end
