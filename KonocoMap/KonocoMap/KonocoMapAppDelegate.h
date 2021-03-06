//
//  KonocoMapAppDelegate.h
//  KonocoMap
//
//  Created by Tobias Kräntzer on 27.05.11.
//  Copyright 2010, 2011 Konoco <http://konoco.org/> All rights reserved.
//
//  This file is part of KonocoMap.
//	
//  Map is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//	
//  Map is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public License
//  along with Map.  If not, see <http://www.gnu.org/licenses/>.
//

#import <Cocoa/Cocoa.h>
#import <CoreLocation/CoreLocation.h>

@class KonocoMapWindowController;

@interface KonocoMapAppDelegate : NSObject <NSApplicationDelegate, CLLocationManagerDelegate> {
@private
    KonocoMapWindowController *mapWindowController;
    CLLocationManager *locationManager;
}

#pragma mark -
#pragma mark Actions

- (IBAction)showMapWindow:(id)sender;

- (IBAction)zoomIn:(id)sender;
- (IBAction)zoomOut:(id)sender;

- (IBAction)toggleFullscreen:(id)sender;

@end
