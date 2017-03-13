//: Playground - noun: a place where people can play
import UIKit
import PlaygroundSupport

PlaygroundPage.current.needsIndefiniteExecution = true
URLCache.shared = URLCache(memoryCapacity: 0, diskCapacity: 0, diskPath: nil)

DataManager.getTopAppsDataFromItunesWithSuccess { (data) -> Void in
    
    // 1
    var json: Any
    
    do {
        json = try JSONSerialization.jsonObject(with: data)
    } catch {
        print(error)
        PlaygroundPage.current.finishExecution()
    }
    
    guard let dictionary = json as? [String: Any] else {
        PlaygroundPage.current.finishExecution()
    }
    
    // 2
    guard let topApps = TopApps(json: dictionary) else {
        print("Error initializing object")
        PlaygroundPage.current.finishExecution()
    }
    
    // 3
    guard let firstItem = topApps.feed?.entries?.first else {
        print("No such item")
        PlaygroundPage.current.finishExecution()
    }
    
    print(firstItem)
    print("\n")
    print(topApps.feed?.entries)
    
    PlaygroundPage.current.finishExecution()
}