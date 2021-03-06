//  Created by Jason Morrissey

#import "CanvasTileView.h"

@protocol CanvasDataSourceProtocol

- (CanvasTileView *) tileViewForIndex:(NSInteger) tileIndex;
- (NSUInteger) totalNumberOfTiles;
- (CGSize) tileDimensions;
- (CGSize) pageMargin;

@end
