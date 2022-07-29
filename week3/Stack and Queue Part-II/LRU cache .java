import java.util.*;
public class LRUCache {    
    int capacity;    
    int count;   
    List<Integer> keys;   
    Map<Integer,Integer> map;   
    LRUCache(int capacity)    {      
        this.capacity=capacity;     
        this.count=0;      
        keys=new ArrayList<>();      
        map=new HashMap<>();  
    }   
    public  int get(int key)    {    
        if(map.get(key)!=null){      
            int x=indexOf(key);      
            keys.remove(x);         
            keys.add(key);       
            return map.get(key);   
        }      
        return -1;   
    }

   public void put(int key, int value)    {   
       if(map.containsKey(key)){       
           map.put(key,value);        
           int x=indexOf(key);       
           keys.remove(x);        
           keys.add(key);       
       }       
       else if(count<capacity){   
           map.put(key,value);     
           keys.add(key);        
           count++;              
       }      
       else if(count>=capacity){   
           map.remove(keys.get(0));    
           count--;       
           keys.remove(0);       
           map.put(key,value);       
           keys.add(key);       
           count++;      
       }   
   }  
    public int indexOf(int element){     
        for(int i=0;i<keys.size();i++){    
            if(keys.get(i)==element){     
                return i;       
            }     
        }      
        return -1;   
    } 
} 
 
